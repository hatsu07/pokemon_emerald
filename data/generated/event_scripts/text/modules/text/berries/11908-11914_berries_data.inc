	@ data/text/berries.inc:210 SootopolisCity_Text_WhatKindOfWishInYourName
	.globl gText_Rom_263FD5
gText_Rom_263FD5: @ 0x08263FD5
	.string "{STR_VAR_1}の なまえには\nどんな ねがいが こめられてるの?$"
	.if (. - gText_Rom_263FD5) > 0x1c
	.error "gText_Rom_263FD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FD5) < 0x1c
	.space 0x1c - (. - gText_Rom_263FD5)
	.endif

	@ data/text/berries.inc:214 SootopolisCity_Text_LikeSeasonBornIn
	.globl gText_Rom_263FF1
gText_Rom_263FF1: @ 0x08263FF1
	.string "はる なつ あき ふゆ\nはるに うまれると はるが すきで\lなつに うまれると なつが すきなのかな?$"
	.if (. - gText_Rom_263FF1) > 0x34
	.error "gText_Rom_263FF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FF1) < 0x34
	.space 0x34 - (. - gText_Rom_263FF1)
	.endif

	@ data/text/berries.inc:219 SootopolisCity_Text_ThenILoveAutumn
	.globl gText_Rom_264025
gText_Rom_264025: @ 0x08264025
	.string "じゃあ キリは あきに うまれたから\nあきが だいすき!\p{STR_VAR_1}は いつが すき?$"
	.if (. - gText_Rom_264025) > 0x29
	.error "gText_Rom_264025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264025) < 0x29
	.space 0x29 - (. - gText_Rom_264025)
	.endif

	@ data/text/berries.inc:224 SootopolisCity_Text_OhDoesntMatter
	.globl gText_Rom_26404E
gText_Rom_26404E: @ 0x0826404E
	.string "そっか…\nかんけいないのか…\pしりたいことって たくさんあるなー$"
	.if (. - gText_Rom_26404E) > 0x21
	.error "gText_Rom_26404E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26404E) < 0x21
	.space 0x21 - (. - gText_Rom_26404E)
	.endif
