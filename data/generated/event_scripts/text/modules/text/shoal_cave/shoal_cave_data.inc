	@ data/text/shoal_cave.inc:1 ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere
	.globl ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere
ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere: @ 0x0826406F
	.string "このさきに すすむのかね?\pもし よかったら\nあさせのしおと あさせのかいがらを\lあつめてきて くれないか\pざいりょうが あつまったら\nわたしが いいもの つくるんだがね{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere) > 0x56
	.error "ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere) < 0x56
	.space 0x56 - (. - ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere)
	.endif

	@ data/text/shoal_cave.inc:9 ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells
	.globl ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells
ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells: @ 0x082640C5
	.string "あさせのしおと あさせのかいがら\nそれぞれ 4つ あれば\lかいがらのすずが つくれるんだが……\pかいがらのすずの ざいりょう なら\nまいにち とれるよ{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells) > 0x4c
	.error "ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells) < 0x4c
	.space 0x4c - (. - ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells)
	.endif

	@ data/text/shoal_cave.inc:16 ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell
	.globl ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell
ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell: @ 0x08264111
	.string "お! あさせのしおと あさせのかいがら!\nりょうも じゅうぶんだ!\pこれで かいがらのすず\nつくっても いいかね?{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell) > 0x3a
	.error "ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell) < 0x3a
	.space 0x3a - (. - ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell)
	.endif

	@ data/text/shoal_cave.inc:22 ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway
	.globl ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway
ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway: @ 0x0826414B
	.string "かいがらのすず\nさっそく つくらせて もらうよ\p…… …… ……\n…… …… ……\pよし できたっ!{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway) > 0x33
	.error "ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway) < 0x33
	.space 0x33 - (. - ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway)
	.endif

	@ data/text/shoal_cave.inc:29 ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell
	.globl ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell
ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell: @ 0x0826417E
	.string "ポケモンに もたせてあげると よろこぶよ\pなんたって かいがらのすずの ねいろは\nてんか いっぴん だからね\pかいがらのすずの ざいりょう なら\nまいにち とれるから\lそろえば また つくらせて もらうよ{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell) > 0x67
	.error "ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell) < 0x67
	.space 0x67 - (. - ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell)
	.endif

	@ data/text/shoal_cave.inc:37 ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell
	.globl ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell
ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell: @ 0x082641E5
	.string "そうかね……\nかいがらのすず つくりたかった……{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell) > 0x19
	.error "ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell) < 0x19
	.space 0x19 - (. - ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell)
	.endif

	@ data/text/shoal_cave.inc:41 ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag
	.globl ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag
ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag: @ 0x082641FE
	.string "つくっても バッグが いっぱいで\nもてない ようだね……\pせいりして また くると いいよ{EOS}"
	.if (. - ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag) > 0x2e
	.error "ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag) < 0x2e
	.space 0x2e - (. - ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag)
	.endif

	@ data/text/shoal_cave.inc:46 ShoalCave_Text_WasShoalSaltNowNothing
	.globl ShoalCave_Text_WasShoalSaltNowNothing
ShoalCave_Text_WasShoalSaltNowNothing: @ 0x0826422C
	.string "あさせのしおを とった あと……\nいまは なにも ない……{EOS}"
	.if (. - ShoalCave_Text_WasShoalSaltNowNothing) > 0x1e
	.error "ShoalCave_Text_WasShoalSaltNowNothing may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_Text_WasShoalSaltNowNothing) < 0x1e
	.space 0x1e - (. - ShoalCave_Text_WasShoalSaltNowNothing)
	.endif

	@ data/text/shoal_cave.inc:50 ShoalCave_Text_WasShoallShellNowNothing
	.globl ShoalCave_Text_WasShoallShellNowNothing
ShoalCave_Text_WasShoallShellNowNothing: @ 0x0826424A
	.string "あさせのかいがらを みつけた あと……\nいまは なにも ない……{EOS}"
	.if (. - ShoalCave_Text_WasShoallShellNowNothing) > 0x21
	.error "ShoalCave_Text_WasShoallShellNowNothing may not grow beyond its original slot"
	.endif
	.if (. - ShoalCave_Text_WasShoallShellNowNothing) < 0x21
	.space 0x21 - (. - ShoalCave_Text_WasShoallShellNowNothing)
	.endif
