	@ data/text/trainers.inc:1925 Route118_Text_DaltonPostRematch
	.globl gText_Rom_25E5F3
gText_Rom_25E5F3: @ 0x0825E5F3
	.string "ひいてるときの ぼくの きもちが\nエレキギターを とおして\lあなたに とどく はずなのさ……{EOS}"
	.if (. - gText_Rom_25E5F3) > 0x2f
	.error "gText_Rom_25E5F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5F3) < 0x2f
	.space 0x2f - (. - gText_Rom_25E5F3)
	.endif
