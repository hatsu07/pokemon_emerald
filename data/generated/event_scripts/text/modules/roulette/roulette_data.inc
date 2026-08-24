	@ src/roulette.c:419 Roulette_Text_PlayMinimumWagerIsX
	.globl Roulette_Text_PlayMinimumWagerIsX
Roulette_Text_PlayMinimumWagerIsX: @ 0x08262CF3
	.string "ここは レート{STR_VAR_1}の ルーレットだい です\nルーレットで あそびますか?{EOS}"
	.if (. - Roulette_Text_PlayMinimumWagerIsX) > 0x25
	.error "Roulette_Text_PlayMinimumWagerIsX may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_PlayMinimumWagerIsX) < 0x25
	.space 0x25 - (. - Roulette_Text_PlayMinimumWagerIsX)
	.endif

	@ src/roulette.c:420 Roulette_Text_NotEnoughCoins
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Roulette_Text_NotEnoughCoins
Roulette_Text_NotEnoughCoins: @ 0x08262D18
	.string "コインが たりません{EOS}"
	.if (. - Roulette_Text_NotEnoughCoins) != 0xb
	.error "Roulette_Text_NotEnoughCoins must retain its original byte length"
	.endif

	@ src/roulette.c:421 Roulette_Text_SpecialRateTable
	.globl Roulette_Text_SpecialRateTable
Roulette_Text_SpecialRateTable: @ 0x08262D23
	.string "ほんじつ このだいでは\nレート アップ じっしちゅう!{EOS}"
	.if (. - Roulette_Text_SpecialRateTable) > 0x1c
	.error "Roulette_Text_SpecialRateTable may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_SpecialRateTable) < 0x1c
	.space 0x1c - (. - Roulette_Text_SpecialRateTable)
	.endif

	@ src/roulette.c:422 Roulette_Text_ControlsInstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Roulette_Text_ControlsInstruction
Roulette_Text_ControlsInstruction: @ 0x08262D3F
	.string "ベットする わくを じゅうじボタンで えらんで\nAボタンで けってい します{EOS}"
	.if (. - Roulette_Text_ControlsInstruction) != 0x27
	.error "Roulette_Text_ControlsInstruction must retain its original byte length"
	.endif

	@ src/roulette.c:423 Roulette_Text_ItsAHit
	.globl Roulette_Text_ItsAHit
Roulette_Text_ItsAHit: @ 0x08262D66
	.string "あたりー!{EOS}"
	.if (. - Roulette_Text_ItsAHit) > 0x6
	.error "Roulette_Text_ItsAHit may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_ItsAHit) < 0x6
	.space 0x6 - (. - Roulette_Text_ItsAHit)
	.endif

	@ src/roulette.c:424 Roulette_Text_Jackpot
	.globl Roulette_Text_Jackpot
Roulette_Text_Jackpot: @ 0x08262D6C
	.string "おおあたり!!{EOS}"
	.if (. - Roulette_Text_Jackpot) > 0x8
	.error "Roulette_Text_Jackpot may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_Jackpot) < 0x8
	.space 0x8 - (. - Roulette_Text_Jackpot)
	.endif

	@ src/roulette.c:425 Roulette_Text_NothingDoing
	.globl Roulette_Text_NothingDoing
Roulette_Text_NothingDoing: @ 0x08262D74
	.string "はずれー{EOS}"
	.if (. - Roulette_Text_NothingDoing) > 0x5
	.error "Roulette_Text_NothingDoing may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_NothingDoing) < 0x5
	.space 0x5 - (. - Roulette_Text_NothingDoing)
	.endif

	@ src/roulette.c:426 Roulette_Text_YouveWonXCoins
	.globl Roulette_Text_YouveWonXCoins
Roulette_Text_YouveWonXCoins: @ 0x08262D79
	.string "おめでとう ございます!\nコイン {STR_VAR_1}まい はいります!{EOS}"
	.if (. - Roulette_Text_YouveWonXCoins) > 0x1d
	.error "Roulette_Text_YouveWonXCoins may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_YouveWonXCoins) < 0x1d
	.space 0x1d - (. - Roulette_Text_YouveWonXCoins)
	.endif

	@ src/roulette.c:427 Roulette_Text_NoCoinsLeft
	.globl Roulette_Text_NoCoinsLeft
Roulette_Text_NoCoinsLeft: @ 0x08262D96
	.string "コインが なくなりました{EOS}"
	.if (. - Roulette_Text_NoCoinsLeft) > 0xd
	.error "Roulette_Text_NoCoinsLeft may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_NoCoinsLeft) < 0xd
	.space 0xd - (. - Roulette_Text_NoCoinsLeft)
	.endif

	@ src/roulette.c:428 Roulette_Text_KeepPlaying
	.globl Roulette_Text_KeepPlaying
Roulette_Text_KeepPlaying: @ 0x08262DA3
	.string "つづけて あそびますか?{EOS}"
	.if (. - Roulette_Text_KeepPlaying) > 0xd
	.error "Roulette_Text_KeepPlaying may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_KeepPlaying) < 0xd
	.space 0xd - (. - Roulette_Text_KeepPlaying)
	.endif

	@ src/roulette.c:429 Roulette_Text_BoardWillBeCleared
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Roulette_Text_BoardWillBeCleared
Roulette_Text_BoardWillBeCleared: @ 0x08262DB0
	.string "だいの うえの たまを\nクリア します{EOS}"
	.if (. - Roulette_Text_BoardWillBeCleared) != 0x14
	.error "Roulette_Text_BoardWillBeCleared must retain its original byte length"
	.endif
	@ Embedded ROM bytes: file offset 0x262DC4, size 0x11
	.byte 0x5A, 0x52, 0x7E, 0x59, 0xAE, 0x5D, 0x2D, 0x00, 0x23, 0x50, 0x13, 0x02, 0x1F, 0x0E, 0x2E, 0xAB
	.byte 0xFF

	@ src/roulette.c:430 Roulette_Text_CoinCaseIsFull
	.globl Roulette_Text_CoinCaseIsFull
Roulette_Text_CoinCaseIsFull: @ 0x08262DD5
	.string "コインが いっぱいです!\nけいひんと こうかん して ください{EOS}"
	.if (. - Roulette_Text_CoinCaseIsFull) > 0x20
	.error "Roulette_Text_CoinCaseIsFull may not grow beyond its original slot"
	.endif
	.if (. - Roulette_Text_CoinCaseIsFull) < 0x20
	.space 0x20 - (. - Roulette_Text_CoinCaseIsFull)
	.endif
