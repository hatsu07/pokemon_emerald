	@ data/text/trainers.inc:2033 Route119_Text_HughIntro (+1 aliases)
	.globl gText_Rom_25EAA1
gText_Rom_25EAA1: @ 0x0825EAA1
	.string "おおぞらは おとこの ロマン!\pじゆうに そらを とぶ きもちよさは\nなにごとにも かえがたい!{EOS}"
	.if (. - gText_Rom_25EAA1) > 0x31
	.error "gText_Rom_25EAA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EAA1) < 0x31
	.space 0x31 - (. - gText_Rom_25EAA1)
	.endif
