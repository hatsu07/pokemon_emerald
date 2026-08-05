	@ data/text/trainers.inc:3131 Route130_Text_SantiagoPostBattle
	.globl gText_Rom_261776
gText_Rom_261776: @ 0x08261776
	.string "こうして およいだり しょうぶしたり……\nオレ しあわせだなあー……$"
	.if (. - gText_Rom_261776) > 0x23
	.error "gText_Rom_261776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261776) < 0x23
	.space 0x23 - (. - gText_Rom_261776)
	.endif
