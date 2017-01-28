# PostgreSQL


## バージョン情報

| 対象 | バージョン |
|:---:|:--:|
| CentOS | CentOS Linux release 7.2.1511 (Core) |
| PostgreSQL | psql (PostgreSQL) 9.5.5 |

## インスト―ル

以下にyumでのインストール方法を記載する。

```Bash
wget yum.postgresql.org/9.5/redhat/rhel-7-x86_64/pgdg-centos95-9.5-2.noarch.rpm
rpm -ivh pgdg-centos95-9.5-2.noarch.rpm
yum -y install postgresql95-server postgresql95-devel postgresql95-contrib

systemctl start postgresql-9.5
systemctl status postgresql-9.5.service
/usr/pgsql-9.5/bin/postgresql95-setup initdb
systemctl start postgresql-9.5
systemctl enable postgresql-9.5
su - postgres
psql
```

## 初期設定

```Bash
# パスワード設定
ALTER USER postgres PASSWORD 'password';
```

```Bash
# vim /var/lib/pgsql/9.5/data/pg_hba.conf
# "local" is for Unix domain socket connections only
local   all             all                                     md5
```

```Bash
systemctl restart postgresql-9.5
```

## ユーザ作成

```Bash
su - psqlgres
-bash-4.2$ createuser -P shota
postgres=# \du
                                               ロール一覧
 ロール名 |                                       属性                                       | メンバー
----------+----------------------------------------------------------------------------------+----------
 postgres | スーパーユーザ, ロールを作成できる, DBを作成できる, レプリケーション, Bypass RLS | {}
 shota    |                                                                                  | {}
```

## ＤＢ作成

```SQL
postgres=# create database hoge;
CREATE DATABASE
postgres=#  \l
                                         データベース一覧
   名前    |  所有者  | エンコーディング |  照合順序   | Ctype(変換演算子) |      アクセス権
-----------+----------+------------------+-------------+-------------------+-----------------------
 hoge      | postgres | UTF8             | ja_JP.UTF-8 | ja_JP.UTF-8       |
 postgres  | postgres | UTF8             | ja_JP.UTF-8 | ja_JP.UTF-8       |
 template0 | postgres | UTF8             | ja_JP.UTF-8 | ja_JP.UTF-8       | =c/postgres          +
           |          |                  |             |                   | postgres=CTc/postgres
 template1 | postgres | UTF8             | ja_JP.UTF-8 | ja_JP.UTF-8       | =c/postgres          +
           |          |                  |             |                   | postgres=CTc/postgres
(4 行)
postgres=# \connect hoge
データベース "hoge" にユーザ"postgres"として接続しました。
hoge=# create table test (id int, name character varying(10));
CREATE TABLE
hoge=# \dt
          リレーションの一覧
 スキーマ | 名前 |    型    |  所有者
----------+------+----------+----------
 public   | test | テーブル | postgres
(1 行)
hoge=# grant select , insert , update, delete on test to shota;
GRANT
hoge=# \q
```

アクアスしてみる

```Bash
$ psql -U shota hoge
hoge=> insert into test(id, name) values (1, 'shota');
INSERT 0 1
hoge=> select * from test;
 id | name
----+-------
  1 | shota
(1 行)
```

## 参考ＵＲＬ

* [CentOSにPostgreSQL9.5をインストールおよびテスト](http://qiita.com/SOJO/items/a1d97887d24c3e44596f)
