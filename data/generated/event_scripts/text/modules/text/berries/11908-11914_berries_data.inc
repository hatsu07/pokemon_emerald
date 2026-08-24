	.globl gText_Rom_263FB0
	.set gText_Rom_263FB0, gText_Rom_263F33 + 0x7d
	@ field-script:0x1E25F3 FieldScriptText_263FB4
	.globl gText_Rom_263FB4
gText_Rom_263FB4: @ 0x08263FB4
	.string "あと　{0xFD}{0x02}には　キリの　だいすきな\nこの　きのみも　あげちゃう！{EOS}"
	.if (. - gText_Rom_263FB4) > 0x21
	.error "gText_Rom_263FB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FB4) < 0x21
	.space 0x21 - (. - gText_Rom_263FB4)
	.endif
	@ data/text/berries.inc:210 SootopolisCity_Text_WhatKindOfWishInYourName
	.globl gText_Rom_263FD5
gText_Rom_263FD5: @ 0x08263FD5
	.string "{STR_VAR_1}の なまえには\nどんな ねがいが こめられてるの?{EOS}"
	.if (. - gText_Rom_263FD5) > 0x1c
	.error "gText_Rom_263FD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FD5) < 0x1c
	.space 0x1c - (. - gText_Rom_263FD5)
	.endif

	@ data/text/berries.inc:214 SootopolisCity_Text_LikeSeasonBornIn
	.globl gText_Rom_263FF1
gText_Rom_263FF1: @ 0x08263FF1
	.string "はる なつ あき ふゆ\nはるに うまれると はるが すきで\lなつに うまれると なつが すきなのかな?{EOS}"
	.if (. - gText_Rom_263FF1) > 0x34
	.error "gText_Rom_263FF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FF1) < 0x34
	.space 0x34 - (. - gText_Rom_263FF1)
	.endif

	@ data/text/berries.inc:219 SootopolisCity_Text_ThenILoveAutumn
	.globl gText_Rom_264025
gText_Rom_264025: @ 0x08264025
	.string "じゃあ キリは あきに うまれたから\nあきが だいすき!\p{STR_VAR_1}は いつが すき?{EOS}"
	.if (. - gText_Rom_264025) > 0x29
	.error "gText_Rom_264025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264025) < 0x29
	.space 0x29 - (. - gText_Rom_264025)
	.endif

	@ data/text/berries.inc:224 SootopolisCity_Text_OhDoesntMatter
	.globl gText_Rom_26404E
gText_Rom_26404E: @ 0x0826404E
	.string "そっか…\nかんけいないのか…\pしりたいことって たくさんあるなー{EOS}"
	.if (. - gText_Rom_26404E) > 0x21
	.error "gText_Rom_26404E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26404E) < 0x21
	.space 0x21 - (. - gText_Rom_26404E)
	.endif
