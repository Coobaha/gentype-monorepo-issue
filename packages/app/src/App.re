[@genType]
let wrongTsImportsWithCustomNameSpace = DemoSomePackage.Demo.demo;

// if compiled from main package.json packages/shim-demo/src/Demo.gen.tsx gets incorrect shim path
//      import {t as ToShim_t} from './Shimmed.shim';
//
// if compiled from module itself path is correct
//      import {t as ToShim_t} from '../src/shims/Shimmed.shim';
[@genType]
type wrongShimImportPath = DemoShimDemo.Demo.t;
