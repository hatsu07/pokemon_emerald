	@ data/text/trainers.inc:2807 Route126_Text_BarryIntro (+1 aliases)
	.globl gText_Rom_260B67
gText_Rom_260B67: @ 0x08260B67
	.string "すいえいは ぜんしん うんどう!\nたいりょくが つくぞー!{EOS}"
	.if (. - gText_Rom_260B67) > 0x1e
	.error "gText_Rom_260B67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B67) < 0x1e
	.space 0x1e - (. - gText_Rom_260B67)
	.endif
