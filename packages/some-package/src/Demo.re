Js.log("Hello, BuckleScript and Reason!");

[@gentype]
type t = Shimed.t;

[@genType.import "common/utils"]
external demo: (~size: string) => Types.demo = "default";
