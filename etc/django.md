# django

## インストール

```Bash
git clone git://github.com/django/django.git
cd django
python setup.py install
cd -
pip install -e django/
```

## 動作確認

```Python
>>> import django
>>> print(django.get_version())
2.0.dev20170128164504
```
