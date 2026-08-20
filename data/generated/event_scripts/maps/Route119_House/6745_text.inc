	@ data/maps/Route119_House/scripts.inc:18 Route119_House_Text_RumorAboutCaveOfOrigin
	.globl gText_Rom_241BED
gText_Rom_241BED: @ 0x08241BED
	.string "どこかに めざめのほこら とよばれる\nどうくつが あるんですって!\pポケモンの たましいが よみがえる ところ\nという うわさ だけど\lそんなこと ほんとうに あるのかしら?{EOS}"
	.if (. - gText_Rom_241BED) > 0x58
	.error "gText_Rom_241BED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_241BED) < 0x58
	.space 0x58 - (. - gText_Rom_241BED)
	.endif
