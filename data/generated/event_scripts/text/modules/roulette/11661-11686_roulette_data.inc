	@ src/roulette.c:419 Roulette_Text_PlayMinimumWagerIsX
	.globl gText_Rom_262CF3
gText_Rom_262CF3: @ 0x08262CF3
	.string "ここは レート{STR_VAR_1}の ルーレットだい です\nルーレットで あそびますか?{EOS}"
	.if (. - gText_Rom_262CF3) > 0x25
	.error "gText_Rom_262CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262CF3) < 0x25
	.space 0x25 - (. - gText_Rom_262CF3)
	.endif

	@ src/roulette.c:420 Roulette_Text_NotEnoughCoins
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262D18
gText_Rom_262D18: @ 0x08262D18
	.string "コインが たりません{EOS}"
	.if (. - gText_Rom_262D18) != 0xb
	.error "gText_Rom_262D18 must retain its original byte length"
	.endif
	.globl gText_Rom_262D1F
	.set gText_Rom_262D1F, gText_Rom_262D18 + 0x7

	@ src/roulette.c:421 Roulette_Text_SpecialRateTable
	.globl gText_Rom_262D23
gText_Rom_262D23: @ 0x08262D23
	.string "ほんじつ このだいでは\nレート アップ じっしちゅう!{EOS}"
	.if (. - gText_Rom_262D23) > 0x1c
	.error "gText_Rom_262D23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D23) < 0x1c
	.space 0x1c - (. - gText_Rom_262D23)
	.endif

	@ src/roulette.c:422 Roulette_Text_ControlsInstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262D3F
gText_Rom_262D3F: @ 0x08262D3F
	.string "ベットする わくを じゅうじボタンで えらんで\nAボタンで けってい します{EOS}"
	.if (. - gText_Rom_262D3F) != 0x27
	.error "gText_Rom_262D3F must retain its original byte length"
	.endif
	.globl gText_Rom_262D62
	.set gText_Rom_262D62, gText_Rom_262D3F + 0x23

	@ src/roulette.c:423 Roulette_Text_ItsAHit
	.globl gText_Rom_262D66
gText_Rom_262D66: @ 0x08262D66
	.string "あたりー!{EOS}"
	.if (. - gText_Rom_262D66) > 0x6
	.error "gText_Rom_262D66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D66) < 0x6
	.space 0x6 - (. - gText_Rom_262D66)
	.endif

	@ src/roulette.c:424 Roulette_Text_Jackpot
	.globl gText_Rom_262D6C
gText_Rom_262D6C: @ 0x08262D6C
	.string "おおあたり!!{EOS}"
	.if (. - gText_Rom_262D6C) > 0x8
	.error "gText_Rom_262D6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D6C) < 0x8
	.space 0x8 - (. - gText_Rom_262D6C)
	.endif

	@ src/roulette.c:425 Roulette_Text_NothingDoing
	.globl gText_Rom_262D74
gText_Rom_262D74: @ 0x08262D74
	.string "はずれー{EOS}"
	.if (. - gText_Rom_262D74) > 0x5
	.error "gText_Rom_262D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D74) < 0x5
	.space 0x5 - (. - gText_Rom_262D74)
	.endif

	@ src/roulette.c:426 Roulette_Text_YouveWonXCoins
	.globl gText_Rom_262D79
gText_Rom_262D79: @ 0x08262D79
	.string "おめでとう ございます!\nコイン {STR_VAR_1}まい はいります!{EOS}"
	.if (. - gText_Rom_262D79) > 0x1d
	.error "gText_Rom_262D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D79) < 0x1d
	.space 0x1d - (. - gText_Rom_262D79)
	.endif

	@ src/roulette.c:427 Roulette_Text_NoCoinsLeft
	.globl gText_Rom_262D96
gText_Rom_262D96: @ 0x08262D96
	.string "コインが なくなりました{EOS}"
	.if (. - gText_Rom_262D96) > 0xd
	.error "gText_Rom_262D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262D96) < 0xd
	.space 0xd - (. - gText_Rom_262D96)
	.endif

	@ src/roulette.c:428 Roulette_Text_KeepPlaying
	.globl gText_Rom_262DA3
gText_Rom_262DA3: @ 0x08262DA3
	.string "つづけて あそびますか?{EOS}"
	.if (. - gText_Rom_262DA3) > 0xd
	.error "gText_Rom_262DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262DA3) < 0xd
	.space 0xd - (. - gText_Rom_262DA3)
	.endif

	@ src/roulette.c:429 Roulette_Text_BoardWillBeCleared
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262DB0
gText_Rom_262DB0: @ 0x08262DB0
	.string "だいの うえの たまを\nクリア します{EOS}"
	.if (. - gText_Rom_262DB0) != 0x14
	.error "gText_Rom_262DB0 must retain its original byte length"
	.endif
	.globl gText_Rom_262DC0
	.set gText_Rom_262DC0, gText_Rom_262DB0 + 0x10
	@ Embedded ROM bytes: file offset 0x262DC4, size 0x11
	.byte 0x5A, 0x52, 0x7E, 0x59, 0xAE, 0x5D, 0x2D, 0x00, 0x23, 0x50, 0x13, 0x02, 0x1F, 0x0E, 0x2E, 0xAB
	.byte 0xFF

	@ src/roulette.c:430 Roulette_Text_CoinCaseIsFull
	.globl gText_Rom_262DD5
gText_Rom_262DD5: @ 0x08262DD5
	.string "コインが いっぱいです!\nけいひんと こうかん して ください{EOS}"
	.if (. - gText_Rom_262DD5) > 0x20
	.error "gText_Rom_262DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262DD5) < 0x20
	.space 0x20 - (. - gText_Rom_262DD5)
	.endif
