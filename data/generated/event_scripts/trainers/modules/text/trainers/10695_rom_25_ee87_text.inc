	@ data/text/trainers.inc:2132 Route120_Text_RobertRegister
	.globl gText_Rom_25EE87
gText_Rom_25EE87: @ 0x0825EE87
	.string "キミって きたい できそうだなー!\nポケナビに とうろく しておきたい!$"
	.if (. - gText_Rom_25EE87) > 0x25
	.error "gText_Rom_25EE87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE87) < 0x25
	.space 0x25 - (. - gText_Rom_25EE87)
	.endif
