This repo shows to issues with gentype

# Setup
`npx lerna bootstrap`

`npx lerna exec yarn build`
## Issues
1. If custom namespace is used gentype outputs incorrect import paths

    **Steps to reproduce:**
    Should be visible after `npx lerna exec build`, if not
    1. build `packages/some-package`
    1. open `Demo.gen.tsx`

    **Wrong output** 
    ```typescript
    
    import {Shimed_t as CustomSomePackage_Shimed_t} from './CustomSomePackage.gen';
    
    import {Types_demo as CustomSomePackage_Types_demo} from './CustomSomePackage.gen';
    ```
    
    **Expected output**
    
    ```typescript
    import {demo as Types_demo} from './Types.gen';
    
    import {t as Shimed_t} from './Shimed.gen';
    ```

2. If gentype is used in dependant module and compilation is done from app module

    **Steps to reproduce:**
    1. build `packages/app`
    1. open `packages/shim-demo/Demo.gen.tsx`
    
    **Output of compilation `packages/app`**
    ```typescript
    import {t as ToShim_t} from './Shimmed.shim';
    ```
    
    **Output of local compilation `packages/shim-demo`**
    ```typescript
    import {t as ToShim_t} from '../src/shims/Shimmed.shim';
    ```
