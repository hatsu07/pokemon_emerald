	@ src/battle_message.c:1509 gText_WillChampionshipDreamComeTrue
	.globl gText_WillChampionshipDreamComeTrue
gText_WillChampionshipDreamComeTrue: @ 0x085ABD5D
	.string "ひがんの はつ ゆうしょう なるか!?\p{EOS}"
	.if (. - gText_WillChampionshipDreamComeTrue) > 0x15
	.error "gText_WillChampionshipDreamComeTrue may not grow beyond its original slot"
	.endif
	.if (. - gText_WillChampionshipDreamComeTrue) < 0x15
	.space 0x15 - (. - gText_WillChampionshipDreamComeTrue)
	.endif

	@ src/battle_message.c:1510 gText_AFormerChampion
	.globl gText_AFormerChampion
gText_AFormerChampion: @ 0x085ABD72
	.string "もと チャンピオン!\p{EOS}"
	.if (. - gText_AFormerChampion) > 0xc
	.error "gText_AFormerChampion may not grow beyond its original slot"
	.endif
	.if (. - gText_AFormerChampion) < 0xc
	.space 0xc - (. - gText_AFormerChampion)
	.endif

	@ src/battle_message.c:1511 gText_ThePreviousChampion
	.globl gText_ThePreviousChampion
gText_ThePreviousChampion: @ 0x085ABD7E
	.string "ぜんかい チャンピオン!\p{EOS}"
	.if (. - gText_ThePreviousChampion) > 0xe
	.error "gText_ThePreviousChampion may not grow beyond its original slot"
	.endif
	.if (. - gText_ThePreviousChampion) < 0xe
	.space 0xe - (. - gText_ThePreviousChampion)
	.endif

