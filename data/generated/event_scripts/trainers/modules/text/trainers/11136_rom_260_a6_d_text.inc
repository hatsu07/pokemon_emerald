	@ data/text/trainers.inc:2786 Route125_Text_IrisNotEnoughMons (+1 aliases)
	.globl gText_Rom_260A6D
gText_Rom_260A6D: @ 0x08260A6D
	.string "ナホ『2たい1で しょうぶ なんて\nそんな まね あたしたちに できないわ{EOS}"
	.if (. - gText_Rom_260A6D) > 0x26
	.error "gText_Rom_260A6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260A6D) < 0x26
	.space 0x26 - (. - gText_Rom_260A6D)
	.endif
