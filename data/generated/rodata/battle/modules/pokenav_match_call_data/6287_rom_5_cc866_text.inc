	@ src/pokenav_match_call_data.c:656 gText_MatchCallMay_Intro2
	.globl gText_Rom_5CC866
gText_Rom_5CC866: @ 0x085CC866
	.string "けんきゅうを おてつだい!$"
	.if (. - gText_Rom_5CC866) > 0xe
	.error "gText_Rom_5CC866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC866) < 0xe
	.space 0xe - (. - gText_Rom_5CC866)
	.endif
