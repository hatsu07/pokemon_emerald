	@ data/text/trainers.inc:866 Route110_Text_TimmyIntro (+1 aliases)
	.globl gText_Rom_25B910
gText_Rom_25B910: @ 0x0825B910
	.string "この あたりの くさむらで\nかっこいい ポケモン みつけたんだぜ!$"
	.if (. - gText_Rom_25B910) > 0x22
	.error "gText_Rom_25B910 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B910) < 0x22
	.space 0x22 - (. - gText_Rom_25B910)
	.endif
