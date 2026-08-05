	@ data/text/tv.inc:1162 GabbyAndTy_Text_GabbyIntro (+1 aliases)
	.globl gText_Rom_252ED4
gText_Rom_252ED4: @ 0x08252ED4
	.string "マリ『あ! あなたは\nこのあいだの {PLAYER}さん!\pよーし どのくらい つよく なったか\nさっそく インタビュー かいしよ!"
	.byte EOS
	.if (. - gText_Rom_252ED4) > 0x3d
	.error "gText_Rom_252ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252ED4) < 0x3d
	.space 0x3d - (. - gText_Rom_252ED4)
	.endif
