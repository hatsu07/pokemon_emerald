	@ src/strings.c:348 gText_Fourth
	.globl gText_Rom_5CA1F5
gText_Rom_5CA1F5: @ 0x085CA1F5
	.string "よんばんめ$"
	.if (. - gText_Rom_5CA1F5) > 0x6
	.error "gText_Rom_5CA1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1F5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1F5)
	.endif
	.globl gUnknown_85CA1FB
gUnknown_85CA1FB: @ 0x085CA1FB

	@ src/strings.c:349 gText_PkmnCantParticipate
	.globl gText_Rom_5CA1FB
gText_Rom_5CA1FB: @ 0x085CA1FB
	.string "その ポケモンは さんか できません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA1FB) > 0x15
	.error "gText_Rom_5CA1FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1FB) < 0x15
	.space 0x15 - (. - gText_Rom_5CA1FB)
	.endif
	.globl gUnknown_85CA210
gUnknown_85CA210: @ 0x085CA210

	@ src/strings.c:350 gText_CancelParticipation
	.globl gText_Rom_5CA210
gText_Rom_5CA210: @ 0x085CA210
	.string "さんかを やめますか?$"
	.if (. - gText_Rom_5CA210) > 0xc
	.error "gText_Rom_5CA210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA210) < 0xc
	.space 0xc - (. - gText_Rom_5CA210)
	.endif
	.globl gUnknown_85CA21C
gUnknown_85CA21C: @ 0x085CA21C

	@ src/strings.c:351 gText_CancelBattle
	.globl gText_Rom_5CA21C
gText_Rom_5CA21C: @ 0x085CA21C
	.string "たいせんを やめますか?$"
	.if (. - gText_Rom_5CA21C) > 0xd
	.error "gText_Rom_5CA21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA21C) < 0xd
	.space 0xd - (. - gText_Rom_5CA21C)
	.endif
	.globl gUnknown_85CA229
gUnknown_85CA229: @ 0x085CA229

	@ src/strings.c:352 gText_ReturnToWaitingRoom
	.globl gText_Rom_5CA229
gText_Rom_5CA229: @ 0x085CA229
	.string "ひかえしつに もどりますか?$"
	.if (. - gText_Rom_5CA229) > 0xf
	.error "gText_Rom_5CA229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA229) < 0xf
	.space 0xf - (. - gText_Rom_5CA229)
	.endif
	.globl gUnknown_85CA238
gUnknown_85CA238: @ 0x085CA238

	@ src/strings.c:353 gText_CancelChallenge
	.globl gText_Rom_5CA238
gText_Rom_5CA238: @ 0x085CA238
	.string "ちょうせんを やめますか?$"
	.if (. - gText_Rom_5CA238) > 0xe
	.error "gText_Rom_5CA238 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA238) < 0xe
	.space 0xe - (. - gText_Rom_5CA238)
	.endif
	.globl gUnknown_85CA246
gUnknown_85CA246: @ 0x085CA246

	@ src/strings.c:354 gText_EscapeFromHere
	.globl gText_Rom_5CA246
gText_Rom_5CA246: @ 0x085CA246
	.string "ここを だっしゅつ して\n{STR_VAR_1}に もどる?$"
	.if (. - gText_Rom_5CA246) > 0x16
	.error "gText_Rom_5CA246 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA246) < 0x16
	.space 0x16 - (. - gText_Rom_5CA246)
	.endif
	.globl gUnknown_85CA25C
gUnknown_85CA25C: @ 0x085CA25C

	@ src/strings.c:355 gText_ReturnToHealingSpot
	.globl gText_Rom_5CA25C
gText_Rom_5CA25C: @ 0x085CA25C
	.string "さいごに やすんだ\n{STR_VAR_1}に テレポートする?$"
	.if (. - gText_Rom_5CA25C) > 0x17
	.error "gText_Rom_5CA25C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA25C) < 0x17
	.space 0x17 - (. - gText_Rom_5CA25C)
	.endif
	.globl gUnknown_85CA273
gUnknown_85CA273: @ 0x085CA273
	@ analyzed canonical ROM range 0x085CA273-0x085CA275
sAnalyzedData_085CA273: @ 0x085CA273
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x09, 0xFF
	.globl gUnknown_85CA276
gUnknown_85CA276: @ 0x085CA276

	@ src/strings.c:357 gJPText_AreYouSureYouWantToSpinTradeMon
	.globl gText_Rom_5CA276
gText_Rom_5CA276: @ 0x085CA276
	.string "{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか?$"
	.if (. - gText_Rom_5CA276) > 0x1b
	.error "gText_Rom_5CA276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA276) < 0x1b
	.space 0x1b - (. - gText_Rom_5CA276)
	.endif
	.space 0x3, 0x00
