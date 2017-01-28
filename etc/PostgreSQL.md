# PostgreSQL

## インスト―ル

### バージョン情報

```Bash
$ cat /etc/redhat-release
CentOS Linux release 7.2.1511 (Core)
```

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

```Bash
# パスワード設定
ALTER USER postgres PASSWORD 'new_password';
```

```Bash
# vim /var/lib/pgsql/9.5/data/pg_hba.conf
# "local" is for Unix domain socket connections only
local   all             all                                     md5
```

```Bash
systemctl restart postgresql-9.5
```
