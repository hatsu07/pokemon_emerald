	@ data/text/trainers.inc:788 Route110_Text_JasmineIntro (+1 aliases)
	.globl gText_Rom_25B5ED
gText_Rom_25B5ED: @ 0x0825B5ED
	.string "じてんしゃを こぎつづけて\nふとももが パンパンに なっちゃった{EOS}"
	.if (. - gText_Rom_25B5ED) > 0x21
	.error "gText_Rom_25B5ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B5ED) < 0x21
	.space 0x21 - (. - gText_Rom_25B5ED)
	.endif
