	@ data/maps/TrainerHill_Entrance/scripts.inc:358 TrainerHill_Entrance_Text_ChallengeTime
	.globl gText_Rom_23BEEC
gText_Rom_23BEEC: @ 0x0823BEEC
	.string "{STR_VAR_1}ふん {STR_VAR_2}びょう {STR_VAR_3}"
	.byte EOS
	.if (. - gText_Rom_23BEEC) > 0xe
	.error "gText_Rom_23BEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BEEC) < 0xe
	.space 0xe - (. - gText_Rom_23BEEC)
	.endif
