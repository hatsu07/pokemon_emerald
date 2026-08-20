	@ data/text/trainers.inc:2708 Route125_Text_NolenIntro (+1 aliases)
	.globl gText_Rom_260724
gText_Rom_260724: @ 0x08260724
	.string "キミが やってくる おとが\nきこえて いたから まってたよ!{EOS}"
	.if (. - gText_Rom_260724) > 0x1f
	.error "gText_Rom_260724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260724) < 0x1f
	.space 0x1f - (. - gText_Rom_260724)
	.endif
