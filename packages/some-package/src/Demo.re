Js.log("Hello, BuckleScript and Reason!");

[@gentype]
type t = Shimed.t;

[@gentype]
[@bs.val] external demo: (~size: string) => Types.demo = "default";
