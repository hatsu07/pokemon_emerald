.if .L__inc_fragment_select_820fe9dac85f == 1
	@ src/strings.c:348 gText_Fourth
	.globl gText_Fourth
gText_Fourth: @ 0x085CA1F5
	.string "よんばんめ{EOS}"
	.if (. - gText_Fourth) > 0x6
	.error "gText_Fourth may not grow beyond its original slot"
	.endif
	.if (. - gText_Fourth) < 0x6
	.space 0x6 - (. - gText_Fourth)
	.endif

	@ src/strings.c:349 gText_PkmnCantParticipate
	.globl gText_PkmnCantParticipate
gText_PkmnCantParticipate: @ 0x085CA1FB
	.string "その ポケモンは さんか できません{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnCantParticipate) > 0x15
	.error "gText_PkmnCantParticipate may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnCantParticipate) < 0x15
	.space 0x15 - (. - gText_PkmnCantParticipate)
	.endif

	@ src/strings.c:350 gText_CancelParticipation
	.globl gText_CancelParticipation
gText_CancelParticipation: @ 0x085CA210
	.string "さんかを やめますか?{EOS}"
	.if (. - gText_CancelParticipation) > 0xc
	.error "gText_CancelParticipation may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelParticipation) < 0xc
	.space 0xc - (. - gText_CancelParticipation)
	.endif

	@ src/strings.c:351 gText_CancelBattle
	.globl gText_CancelBattle
gText_CancelBattle: @ 0x085CA21C
	.string "たいせんを やめますか?{EOS}"
	.if (. - gText_CancelBattle) > 0xd
	.error "gText_CancelBattle may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelBattle) < 0xd
	.space 0xd - (. - gText_CancelBattle)
	.endif

	@ src/strings.c:352 gText_ReturnToWaitingRoom
	.globl gText_ReturnToWaitingRoom
gText_ReturnToWaitingRoom: @ 0x085CA229
	.string "ひかえしつに もどりますか?{EOS}"
	.if (. - gText_ReturnToWaitingRoom) > 0xf
	.error "gText_ReturnToWaitingRoom may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnToWaitingRoom) < 0xf
	.space 0xf - (. - gText_ReturnToWaitingRoom)
	.endif

	@ src/strings.c:353 gText_CancelChallenge
	.globl gText_CancelChallenge
gText_CancelChallenge: @ 0x085CA238
	.string "ちょうせんを やめますか?{EOS}"
	.if (. - gText_CancelChallenge) > 0xe
	.error "gText_CancelChallenge may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelChallenge) < 0xe
	.space 0xe - (. - gText_CancelChallenge)
	.endif

	@ src/strings.c:354 gText_EscapeFromHere
	.globl gText_EscapeFromHere
gText_EscapeFromHere: @ 0x085CA246
	.string "ここを だっしゅつ して\n{STR_VAR_1}に もどる?{EOS}"
	.if (. - gText_EscapeFromHere) > 0x16
	.error "gText_EscapeFromHere may not grow beyond its original slot"
	.endif
	.if (. - gText_EscapeFromHere) < 0x16
	.space 0x16 - (. - gText_EscapeFromHere)
	.endif

	@ src/strings.c:355 gText_ReturnToHealingSpot
	.globl gText_ReturnToHealingSpot
gText_ReturnToHealingSpot: @ 0x085CA25C
	.string "さいごに やすんだ\n{STR_VAR_1}に テレポートする?{EOS}"
	.if (. - gText_ReturnToHealingSpot) > 0x17
	.error "gText_ReturnToHealingSpot may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnToHealingSpot) < 0x17
	.space 0x17 - (. - gText_ReturnToHealingSpot)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CA273: party_menu.s: CursorCb_Register, CursorCb_Trade1, CursorCb_Trade2
	.globl gPartyMenuData_085CA273
gPartyMenuData_085CA273: @ 0x085CA273
	@ analyzed canonical ROM range 0x085CA273-0x085CA275
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFC, 0x09, 0xFF

	@ src/strings.c:357 gJPText_AreYouSureYouWantToSpinTradeMon
	.globl gJPText_AreYouSureYouWantToSpinTradeMon
gJPText_AreYouSureYouWantToSpinTradeMon: @ 0x085CA276
	.string "{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか?{EOS}"
	.if (. - gJPText_AreYouSureYouWantToSpinTradeMon) > 0x1b
	.error "gJPText_AreYouSureYouWantToSpinTradeMon may not grow beyond its original slot"
	.endif
	.if (. - gJPText_AreYouSureYouWantToSpinTradeMon) < 0x1b
	.space 0x1b - (. - gJPText_AreYouSureYouWantToSpinTradeMon)
	.endif
	.space 0x3, 0x00
.elseif .L__inc_fragment_select_820fe9dac85f == 2
	@ src/data/party_menu.h:807 party_menu_line_807 (+1 aliases)
	.globl gText_Rom_5CA3DF
gText_Rom_5CA3DF: @ 0x085CA3DF
	.string "いれかえ{EOS}"
	.if (. - gText_Rom_5CA3DF) > 0x5
	.error "gText_Rom_5CA3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DF) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DF)
	.endif

.endif
