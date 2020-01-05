from hashlib import md5


payload = "key:deadbeef|content:aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa|user:admin|command:getflag"
hp = md5(payload).hexdigest()
payload += "&" + hp

print(payload)