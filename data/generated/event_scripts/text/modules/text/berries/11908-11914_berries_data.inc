	.globl gText_Rom_263FB0
	.set gText_Rom_263FB0, SootopolisCity_Text_NameIsKiriHaveOneOfThese + 0x7d
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
	.globl SootopolisCity_Text_WhatKindOfWishInYourName
SootopolisCity_Text_WhatKindOfWishInYourName: @ 0x08263FD5
	.string "{STR_VAR_1}の なまえには\nどんな ねがいが こめられてるの?{EOS}"
	.if (. - SootopolisCity_Text_WhatKindOfWishInYourName) > 0x1c
	.error "SootopolisCity_Text_WhatKindOfWishInYourName may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_WhatKindOfWishInYourName) < 0x1c
	.space 0x1c - (. - SootopolisCity_Text_WhatKindOfWishInYourName)
	.endif

	@ data/text/berries.inc:214 SootopolisCity_Text_LikeSeasonBornIn
	.globl SootopolisCity_Text_LikeSeasonBornIn
SootopolisCity_Text_LikeSeasonBornIn: @ 0x08263FF1
	.string "はる なつ あき ふゆ\nはるに うまれると はるが すきで\lなつに うまれると なつが すきなのかな?{EOS}"
	.if (. - SootopolisCity_Text_LikeSeasonBornIn) > 0x34
	.error "SootopolisCity_Text_LikeSeasonBornIn may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_LikeSeasonBornIn) < 0x34
	.space 0x34 - (. - SootopolisCity_Text_LikeSeasonBornIn)
	.endif

	@ data/text/berries.inc:219 SootopolisCity_Text_ThenILoveAutumn
	.globl SootopolisCity_Text_ThenILoveAutumn
SootopolisCity_Text_ThenILoveAutumn: @ 0x08264025
	.string "じゃあ キリは あきに うまれたから\nあきが だいすき!\p{STR_VAR_1}は いつが すき?{EOS}"
	.if (. - SootopolisCity_Text_ThenILoveAutumn) > 0x29
	.error "SootopolisCity_Text_ThenILoveAutumn may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_ThenILoveAutumn) < 0x29
	.space 0x29 - (. - SootopolisCity_Text_ThenILoveAutumn)
	.endif

	@ data/text/berries.inc:224 SootopolisCity_Text_OhDoesntMatter
	.globl SootopolisCity_Text_OhDoesntMatter
SootopolisCity_Text_OhDoesntMatter: @ 0x0826404E
	.string "そっか…\nかんけいないのか…\pしりたいことって たくさんあるなー{EOS}"
	.if (. - SootopolisCity_Text_OhDoesntMatter) > 0x21
	.error "SootopolisCity_Text_OhDoesntMatter may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Text_OhDoesntMatter) < 0x21
	.space 0x21 - (. - SootopolisCity_Text_OhDoesntMatter)
	.endif
