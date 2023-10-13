T = input()

if 'c=' in T:
    T = T.replace('c=', 'a')
    
if 'c-' in T:
    T = T.replace('c-', 'a')

if 'dz=' in T:
    T = T.replace('dz=', 'a')

if 'd-' in T:
    T = T.replace('d-', 'a')

if 'lj' in T:
    T = T.replace('lj', 'a')
    
if 'nj' in T:
    T = T.replace('nj', 'a')
    
if 's=' in T:
    T = T.replace('s=', 'a')

if 'z=' in T:
    T = T.replace('z=', 'a')
    
print(len(T))