	@ data/text/trainers.inc:2852 Route126_Text_PabloRegister
	.globl gText_Rom_260CD2
gText_Rom_260CD2: @ 0x08260CD2
	.string "いやー いいね!\nぜひとも おちかづきに なっておきたいね!$"
	.if (. - gText_Rom_260CD2) > 0x1f
	.error "gText_Rom_260CD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260CD2) < 0x1f
	.space 0x1f - (. - gText_Rom_260CD2)
	.endif
