	@ data/maps/TrainerHill_Entrance/scripts.inc:358 TrainerHill_Entrance_Text_ChallengeTime
	.globl gText_Rom_5FB8F1
gText_Rom_5FB8F1: @ 0x085FB8F1
	.string "{STR_VAR_1}ふん {STR_VAR_2}びょう {STR_VAR_3}$"
	.if (. - gText_Rom_5FB8F1) > 0xe
	.error "gText_Rom_5FB8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB8F1) < 0xe
	.space 0xe - (. - gText_Rom_5FB8F1)
	.endif
	@ Replaced baserom.gba range: offset=0x5FB8FF, size=0x3
	.byte 0xA2, 0xC0, 0xFF

