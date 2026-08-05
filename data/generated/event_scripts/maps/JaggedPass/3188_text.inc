	@ data/maps/JaggedPass/scripts.inc:219 JaggedPass_Text_EthanPostRematch
	.globl gText_Rom_215F69
gText_Rom_215F69: @ 0x08215F69
	.string "ぼくも キンセツで カゼノさんから\nダートじてんしゃ もらおうかな$"
	.if (. - gText_Rom_215F69) > 0x22
	.error "gText_Rom_215F69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F69) < 0x22
	.space 0x22 - (. - gText_Rom_215F69)
	.endif
