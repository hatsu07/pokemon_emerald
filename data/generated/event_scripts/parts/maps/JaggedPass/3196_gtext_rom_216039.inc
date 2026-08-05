	@ data/maps/JaggedPass/scripts.inc:240 JaggedPass_Text_BoulderShakingInResponseToEmblem
	.globl gText_Rom_216039
gText_Rom_216039: @ 0x08216039
	.string "あ! マグマのしるしに はんのうして……\nおおきな いわが……\lブルブルと しんどう している!$"
	.if (. - gText_Rom_216039) > 0x31
	.error "gText_Rom_216039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216039) < 0x31
	.space 0x31 - (. - gText_Rom_216039)
	.endif
