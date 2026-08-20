	@ data/text/trainers.inc:2912 Route127_Text_JonahDefeat (+1 aliases)
	.globl gText_Rom_260F1E
gText_Rom_260F1E: @ 0x08260F1E
	.string "…… まけても\nこころは おだやかです{EOS}"
	.if (. - gText_Rom_260F1E) > 0x14
	.error "gText_Rom_260F1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260F1E) < 0x14
	.space 0x14 - (. - gText_Rom_260F1E)
	.endif
