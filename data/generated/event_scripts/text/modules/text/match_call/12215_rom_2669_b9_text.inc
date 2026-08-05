	@ data/text/match_call.inc:226 MatchCall_PersonalizedText5
	.globl gText_Rom_2669B9
gText_Rom_2669B9: @ 0x082669B9
	.string "{STR_VAR_1} でーす\nきょうはね すなはま から\lうみを ながめて いるんだ!\pはー…… キラキラ なみが ひかって\nここから みる うみが いちばん きれい!\lあー おなかすいた じゃあまたね!$"
	.if (. - gText_Rom_2669B9) > 0x5f
	.error "gText_Rom_2669B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2669B9) < 0x5f
	.space 0x5f - (. - gText_Rom_2669B9)
	.endif
