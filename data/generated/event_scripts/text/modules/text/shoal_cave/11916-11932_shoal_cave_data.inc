	@ data/text/shoal_cave.inc:1 ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere
	.globl gText_Rom_26406F
gText_Rom_26406F: @ 0x0826406F
	.string "このさきに すすむのかね?\pもし よかったら\nあさせのしおと あさせのかいがらを\lあつめてきて くれないか\pざいりょうが あつまったら\nわたしが いいもの つくるんだがね$"
	.if (. - gText_Rom_26406F) > 0x56
	.error "gText_Rom_26406F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26406F) < 0x56
	.space 0x56 - (. - gText_Rom_26406F)
	.endif

	@ data/text/shoal_cave.inc:9 ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells
	.globl gText_Rom_2640C5
gText_Rom_2640C5: @ 0x082640C5
	.string "あさせのしおと あさせのかいがら\nそれぞれ 4つ あれば\lかいがらのすずが つくれるんだが……\pかいがらのすずの ざいりょう なら\nまいにち とれるよ$"
	.if (. - gText_Rom_2640C5) > 0x4c
	.error "gText_Rom_2640C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2640C5) < 0x4c
	.space 0x4c - (. - gText_Rom_2640C5)
	.endif

	@ data/text/shoal_cave.inc:16 ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell
	.globl gText_Rom_264111
gText_Rom_264111: @ 0x08264111
	.string "お! あさせのしおと あさせのかいがら!\nりょうも じゅうぶんだ!\pこれで かいがらのすず\nつくっても いいかね?$"
	.if (. - gText_Rom_264111) > 0x3a
	.error "gText_Rom_264111 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264111) < 0x3a
	.space 0x3a - (. - gText_Rom_264111)
	.endif

	@ data/text/shoal_cave.inc:22 ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway
	.globl gText_Rom_26414B
gText_Rom_26414B: @ 0x0826414B
	.string "かいがらのすず\nさっそく つくらせて もらうよ\p…… …… ……\n…… …… ……\pよし できたっ!$"
	.if (. - gText_Rom_26414B) > 0x33
	.error "gText_Rom_26414B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26414B) < 0x33
	.space 0x33 - (. - gText_Rom_26414B)
	.endif

	@ data/text/shoal_cave.inc:29 ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell
	.globl gText_Rom_26417E
gText_Rom_26417E: @ 0x0826417E
	.string "ポケモンに もたせてあげると よろこぶよ\pなんたって かいがらのすずの ねいろは\nてんか いっぴん だからね\pかいがらのすずの ざいりょう なら\nまいにち とれるから\lそろえば また つくらせて もらうよ$"
	.if (. - gText_Rom_26417E) > 0x67
	.error "gText_Rom_26417E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26417E) < 0x67
	.space 0x67 - (. - gText_Rom_26417E)
	.endif

	@ data/text/shoal_cave.inc:37 ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell
	.globl gText_Rom_2641E5
gText_Rom_2641E5: @ 0x082641E5
	.string "そうかね……\nかいがらのすず つくりたかった……$"
	.if (. - gText_Rom_2641E5) > 0x19
	.error "gText_Rom_2641E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2641E5) < 0x19
	.space 0x19 - (. - gText_Rom_2641E5)
	.endif

	@ data/text/shoal_cave.inc:41 ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag
	.globl gText_Rom_2641FE
gText_Rom_2641FE: @ 0x082641FE
	.string "つくっても バッグが いっぱいで\nもてない ようだね……\pせいりして また くると いいよ$"
	.if (. - gText_Rom_2641FE) > 0x2e
	.error "gText_Rom_2641FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2641FE) < 0x2e
	.space 0x2e - (. - gText_Rom_2641FE)
	.endif

	@ data/text/shoal_cave.inc:46 ShoalCave_Text_WasShoalSaltNowNothing
	.globl gText_Rom_26422C
gText_Rom_26422C: @ 0x0826422C
	.string "あさせのしおを とった あと……\nいまは なにも ない……$"
	.if (. - gText_Rom_26422C) > 0x1e
	.error "gText_Rom_26422C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26422C) < 0x1e
	.space 0x1e - (. - gText_Rom_26422C)
	.endif

	@ data/text/shoal_cave.inc:50 ShoalCave_Text_WasShoallShellNowNothing
	.globl gText_Rom_26424A
gText_Rom_26424A: @ 0x0826424A
	.string "あさせのかいがらを みつけた あと……\nいまは なにも ない……$"
	.if (. - gText_Rom_26424A) > 0x21
	.error "gText_Rom_26424A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26424A) < 0x21
	.space 0x21 - (. - gText_Rom_26424A)
	.endif
