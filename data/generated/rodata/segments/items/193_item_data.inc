	@ asm/item.s:165 CopyItemName
	.globl gText_Rom_5C9440
gText_Rom_5C9440: @ 0x085C9440
	.string "のみ$"
	.if (. - gText_Rom_5C9440) > 0x3
	.error "gText_Rom_5C9440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9440) < 0x3
	.space 0x3 - (. - gText_Rom_5C9440)
	.endif
	.globl gUnknown_85C9443
gUnknown_85C9443: @ 0x085C9443

	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_5C9443
gText_Rom_5C9443: @ 0x085C9443
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_5C9443) > 0x5
	.error "gText_Rom_5C9443 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9443) < 0x5
	.space 0x5 - (. - gText_Rom_5C9443)
	.endif
	.globl gUnknown_85C9448
gUnknown_85C9448: @ 0x085C9448

	@ src/strings.c:158 gText_CloseBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9448
gText_Rom_5C9448: @ 0x085C9448
	.string "バッグをとじる$"
	.if (. - gText_Rom_5C9448) != 0x8
	.error "gText_Rom_5C9448 must retain its original byte length"
	.endif
	.globl gText_Rom_5C944C
	.set gText_Rom_5C944C, gText_Rom_5C9448 + 0x4
	.globl gUnknown_85C9450
gUnknown_85C9450: @ 0x085C9450

	@ src/strings.c:159 gText_Var1IsSelected
	.globl gText_Rom_5C9450
gText_Rom_5C9450: @ 0x085C9450
	.string "{STR_VAR_1}を\nどうしますか?$"
	.if (. - gText_Rom_5C9450) > 0xc
	.error "gText_Rom_5C9450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9450) < 0xc
	.space 0xc - (. - gText_Rom_5C9450)
	.endif
	.globl gUnknown_85C945C
gUnknown_85C945C: @ 0x085C945C

	@ src/strings.c:160 gText_CantWriteMail
	.globl gText_Rom_5C945C
gText_Rom_5C945C: @ 0x085C945C
	.string "ここで メールを\nかくことは できません!$"
	.if (. - gText_Rom_5C945C) > 0x16
	.error "gText_Rom_5C945C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C945C) < 0x16
	.space 0x16 - (. - gText_Rom_5C945C)
	.endif
	.globl gUnknown_85C9472
gUnknown_85C9472: @ 0x085C9472

	@ src/strings.c:161 gText_NoPokemon
	.globl gText_Rom_5C9472
gText_Rom_5C9472: @ 0x085C9472
	.string "ポケモンが いませんよ!$"
	.if (. - gText_Rom_5C9472) > 0xd
	.error "gText_Rom_5C9472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9472) < 0xd
	.space 0xd - (. - gText_Rom_5C9472)
	.endif
	.globl gUnknown_85C947F
gUnknown_85C947F: @ 0x085C947F

	@ src/strings.c:162 gText_MoveVar1Where
	.globl gText_Rom_5C947F
gText_Rom_5C947F: @ 0x085C947F
	.string "{STR_VAR_1}を\nどこに いれますか?$"
	.if (. - gText_Rom_5C947F) > 0xf
	.error "gText_Rom_5C947F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C947F) < 0xf
	.space 0xf - (. - gText_Rom_5C947F)
	.endif
	.globl gUnknown_85C948E
gUnknown_85C948E: @ 0x085C948E

	@ src/strings.c:163 gText_Var1CantBeHeld
	.globl gText_Rom_5C948E
gText_Rom_5C948E: @ 0x085C948E
	.string "{STR_VAR_1}を\nもたせることは できません!$"
	.if (. - gText_Rom_5C948E) > 0x13
	.error "gText_Rom_5C948E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C948E) < 0x13
	.space 0x13 - (. - gText_Rom_5C948E)
	.endif
	.globl gUnknown_85C94A1
gUnknown_85C94A1: @ 0x085C94A1

	@ src/item_menu.c:219 sText_Var1CantBeHeldHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C94A1
gText_Rom_5C94A1: @ 0x085C94A1
	.string "ここでは {STR_VAR_1}を\nもたせることは できません!$"
	.if (. - gText_Rom_5C94A1) != 0x18
	.error "gText_Rom_5C94A1 must retain its original byte length"
	.endif
	.globl gText_Rom_5C94A6
	.set gText_Rom_5C94A6, gText_Rom_5C94A1 + 0x5
	.globl gUnknown_85C94B9
gUnknown_85C94B9: @ 0x085C94B9

	@ src/item_menu.c:220 sText_DepositHowManyVar1
	.globl gText_Rom_5C94B9
gText_Rom_5C94B9: @ 0x085C94B9
	.string "{STR_VAR_1} を\nいくつ あずけますか?$"
	.if (. - gText_Rom_5C94B9) > 0x11
	.error "gText_Rom_5C94B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94B9) < 0x11
	.space 0x11 - (. - gText_Rom_5C94B9)
	.endif
	.globl gUnknown_85C94CA
gUnknown_85C94CA: @ 0x085C94CA

	@ src/item_menu.c:221 sText_DepositedVar2Var1s
	.globl gText_Rom_5C94CA
gText_Rom_5C94CA: @ 0x085C94CA
	.string "{STR_VAR_1} を\n{STR_VAR_2}コ　あずけました$"
	.if (. - gText_Rom_5C94CA) > 0x10
	.error "gText_Rom_5C94CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94CA) < 0x10
	.space 0x10 - (. - gText_Rom_5C94CA)
	.endif
	.globl gUnknown_85C94DA
gUnknown_85C94DA: @ 0x085C94DA

	@ src/item_menu.c:222 sText_NoRoomForItems
	.globl gText_Rom_5C94DA
gText_Rom_5C94DA: @ 0x085C94DA
	.string "これいじょう\nあずけられません!$"
	.if (. - gText_Rom_5C94DA) > 0x11
	.error "gText_Rom_5C94DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94DA) < 0x11
	.space 0x11 - (. - gText_Rom_5C94DA)
	.endif
	.globl gUnknown_85C94EB
gUnknown_85C94EB: @ 0x085C94EB

	@ src/item_menu.c:223 sText_CantStoreImportantItems
	.globl gText_Rom_5C94EB
gText_Rom_5C94EB: @ 0x085C94EB
	.string "たいせつな どうぐは\nパソコンに　\nいれられません!$"
	.if (. - gText_Rom_5C94EB) > 0x1b
	.error "gText_Rom_5C94EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94EB) < 0x1b
	.space 0x1b - (. - gText_Rom_5C94EB)
	.endif
	.globl gUnknown_85C9506
gUnknown_85C9506: @ 0x085C9506

	@ src/player_pc.c:179 sText_TooImportantToToss
	.globl gText_Rom_5C9506
gText_Rom_5C9506: @ 0x085C9506
	.string "これは とても\nたいせつなモノ なので\nすてられません!$"
	.if (. - gText_Rom_5C9506) > 0x1d
	.error "gText_Rom_5C9506 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9506) < 0x1d
	.space 0x1d - (. - gText_Rom_5C9506)
	.endif
	.globl gUnknown_85C9523
gUnknown_85C9523: @ 0x085C9523

	@ src/strings.c:164 gText_TossHowManyVar1s
	.globl gText_Rom_5C9523
gText_Rom_5C9523: @ 0x085C9523
	.string "{STR_VAR_1}を\nいくつ すてますか?$"
	.if (. - gText_Rom_5C9523) > 0xf
	.error "gText_Rom_5C9523 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9523) < 0xf
	.space 0xf - (. - gText_Rom_5C9523)
	.endif
	.globl gUnknown_85C9532
gUnknown_85C9532: @ 0x085C9532

	@ src/strings.c:165 gText_ThrewAwayVar2Var1s
	.globl gText_Rom_5C9532
gText_Rom_5C9532: @ 0x085C9532
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてました$"
	.if (. - gText_Rom_5C9532) > 0xe
	.error "gText_Rom_5C9532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9532) < 0xe
	.space 0xe - (. - gText_Rom_5C9532)
	.endif
	.globl gUnknown_85C9540
gUnknown_85C9540: @ 0x085C9540

	@ src/strings.c:166 gText_ConfirmTossItems
	.globl gText_Rom_5C9540
gText_Rom_5C9540: @ 0x085C9540
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてても\nよろしいですか?$"
	.if (. - gText_Rom_5C9540) > 0x16
	.error "gText_Rom_5C9540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9540) < 0x16
	.space 0x16 - (. - gText_Rom_5C9540)
	.endif
	.globl gUnknown_85C9556
gUnknown_85C9556: @ 0x085C9556

	@ src/strings.c:167 gText_DadsAdvice
	.globl gText_Rom_5C9556
gText_Rom_5C9556: @ 0x085C9556
	.string "おとうさんの ことば……\n{PLAYER}! こういうものには\lつかいどきが あるんだ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9556) > 0x29
	.error "gText_Rom_5C9556 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9556) < 0x29
	.space 0x29 - (. - gText_Rom_5C9556)
	.endif
	.globl gUnknown_85C957F
gUnknown_85C957F: @ 0x085C957F

	@ src/item_use.c:88 sText_CantDismountBike
	.globl gText_Rom_5C957F
gText_Rom_5C957F: @ 0x085C957F
	.string "ここでは おりられない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C957F) > 0xf
	.error "gText_Rom_5C957F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C957F) < 0xf
	.space 0xf - (. - gText_Rom_5C957F)
	.endif
	.globl gUnknown_85C958E
gUnknown_85C958E: @ 0x085C958E
	@ Replaced baserom.gba range: offset=0x5C958E, size=0x28
	.byte 0x05, 0x50, 0xAB, 0xFE, 0x6F, 0x5C, 0x7E, 0x37, 0x00, 0x1A, 0x2E, 0x19, 0x03, 0x00, 0x0C, 0x13
	.byte 0x02, 0x29, 0x40, 0xAB, 0xFB, 0x11, 0x06, 0x08, 0x16, 0x00, 0x45, 0x03, 0x39, 0x37, 0x00, 0x03
	.byte 0x1F, 0x50, 0x13, 0x29, 0xAB, 0xFC, 0x09, 0xFF
	.globl gUnknown_85C95B6
gUnknown_85C95B6: @ 0x085C95B6

	@ src/item_use.c:90 sText_ItemFinderOnTop
	.globl gText_Rom_5C95B6
gText_Rom_5C95B6: @ 0x085C95B6
	.string "マシンが あしもとで\nすごく はんのう しているぞ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95B6) > 0x1d
	.error "gText_Rom_5C95B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95B6) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95B6)
	.endif
	.globl gUnknown_85C95D3
gUnknown_85C95D3: @ 0x085C95D3

	@ src/item_use.c:91 sText_ItemFinderNothing
	.globl gText_Rom_5C95D3
gText_Rom_5C95D3: @ 0x085C95D3
	.string "…… …… ふう!\n…… なんにも はんのう しない{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95D3) > 0x1d
	.error "gText_Rom_5C95D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95D3) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95D3)
	.endif
	.globl gUnknown_85C95F0
gUnknown_85C95F0: @ 0x085C95F0

	@ src/item_use.c:92 sText_CoinCase
	.globl gText_Rom_5C95F0
gText_Rom_5C95F0: @ 0x085C95F0
	.string "あなたの コイン\n{STR_VAR_1}まい{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95F0) > 0x10
	.error "gText_Rom_5C95F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95F0) < 0x10
	.space 0x10 - (. - gText_Rom_5C95F0)
	.endif
	.globl gUnknown_85C9600
gUnknown_85C9600: @ 0x085C9600

	@ src/item_use.c:94 sText_BootedUpTM
	.globl gText_Rom_5C9600
gText_Rom_5C9600: @ 0x085C9600
	.string "わざマシンを きどうした!$"
	.if (. - gText_Rom_5C9600) > 0xe
	.error "gText_Rom_5C9600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9600) < 0xe
	.space 0xe - (. - gText_Rom_5C9600)
	.endif
	.globl gUnknown_85C960E
gUnknown_85C960E: @ 0x085C960E

	@ src/item_use.c:95 sText_BootedUpHM
	.globl gText_Rom_5C960E
gText_Rom_5C960E: @ 0x085C960E
	.string "ひでんマシンを きどうした!$"
	.if (. - gText_Rom_5C960E) > 0xf
	.error "gText_Rom_5C960E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C960E) < 0xf
	.space 0xf - (. - gText_Rom_5C960E)
	.endif
	.globl gUnknown_85C961D
gUnknown_85C961D: @ 0x085C961D

	@ src/item_use.c:96 sText_TMHMContainedVar1
	.globl gText_Rom_5C961D
gText_Rom_5C961D: @ 0x085C961D
	.string "なかには {STR_VAR_1}が\nきろくされていた!\p{STR_VAR_1}を\nポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5C961D) > 0x27
	.error "gText_Rom_5C961D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C961D) < 0x27
	.space 0x27 - (. - gText_Rom_5C961D)
	.endif
	.globl gUnknown_85C9644
gUnknown_85C9644: @ 0x085C9644

	@ src/strings.c:168 gText_PlayerUsedVar2
	.globl gText_Rom_5C9644
gText_Rom_5C9644: @ 0x085C9644
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9644) > 0x10
	.error "gText_Rom_5C9644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9644) < 0x10
	.space 0x10 - (. - gText_Rom_5C9644)
	.endif
	.globl gUnknown_85C9654
gUnknown_85C9654: @ 0x085C9654

	@ src/strings.c:169 gText_RepelEffectsLingered
	.globl gText_Rom_5C9654
gText_Rom_5C9654: @ 0x085C9654
	.string "まだ まえに つかった スプレーの\nこうかが のこってます!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9654) > 0x21
	.error "gText_Rom_5C9654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9654) < 0x21
	.space 0x21 - (. - gText_Rom_5C9654)
	.endif
	.globl gUnknown_85C9675
gUnknown_85C9675: @ 0x085C9675

	@ src/item_use.c:97 sText_UsedVar2WildLured
	.globl gText_Rom_5C9675
gText_Rom_5C9675: @ 0x085C9675
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しやすくなった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9675) > 0x24
	.error "gText_Rom_5C9675 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9675) < 0x24
	.space 0x24 - (. - gText_Rom_5C9675)
	.endif
	.globl gUnknown_85C9699
gUnknown_85C9699: @ 0x085C9699

	@ src/item_use.c:98 sText_UsedVar2WildRepelled
	.globl gText_Rom_5C9699
gText_Rom_5C9699: @ 0x085C9699
	.string "{PLAYER}は\n{STR_VAR_2}を つかった!\pポケモンと\nそうぐう しにくくなった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9699) > 0x24
	.error "gText_Rom_5C9699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9699) < 0x24
	.space 0x24 - (. - gText_Rom_5C9699)
	.endif
	.globl gUnknown_85C96BD
gUnknown_85C96BD: @ 0x085C96BD
	@ Decoded text from ROM range: offset=0x5C96BD, size=0x11
	.string "ボックスが　いっぱい　です！{PAUSE_UNTIL_PRESS}$"
	.globl gUnknown_85C96CE
gUnknown_85C96CE: @ 0x085C96CE

	@ src/item_use.c:93 sText_PowderQty
	.globl gText_Rom_5C96CE
gText_Rom_5C96CE: @ 0x085C96CE
	.string "こなの りょう {STR_VAR_1}{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C96CE) > 0xd
	.error "gText_Rom_5C96CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96CE) < 0xd
	.space 0xd - (. - gText_Rom_5C96CE)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96DB
gText_Rom_5C96DB: @ 0x085C96DB
	.string "フィールド$"
	.if (. - gText_Rom_5C96DB) > 0x6
	.error "gText_Rom_5C96DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96DB) < 0x6
	.space 0x6 - (. - gText_Rom_5C96DB)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E1
gText_Rom_5C96E1: @ 0x085C96E1
	.string "せんとう$"
	.if (. - gText_Rom_5C96E1) > 0x5
	.error "gText_Rom_5C96E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E1) < 0x5
	.space 0x5 - (. - gText_Rom_5C96E1)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E6
gText_Rom_5C96E6: @ 0x085C96E6
	.string "ポケモンリスト$"
	.if (. - gText_Rom_5C96E6) > 0x8
	.error "gText_Rom_5C96E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E6) < 0x8
	.space 0x8 - (. - gText_Rom_5C96E6)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+1 aliases)
	.globl gText_Rom_5C96EE
gText_Rom_5C96EE: @ 0x085C96EE
	.string "ショップ$"
	.if (. - gText_Rom_5C96EE) > 0x5
	.error "gText_Rom_5C96EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96EE) < 0x5
	.space 0x5 - (. - gText_Rom_5C96EE)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96F3
gText_Rom_5C96F3: @ 0x085C96F3
	.string "パソコン$"
	.if (. - gText_Rom_5C96F3) > 0x5
	.error "gText_Rom_5C96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96F3) < 0x5
	.space 0x5 - (. - gText_Rom_5C96F3)
	.endif
	.globl gUnknown_85C96F8
gUnknown_85C96F8: @ 0x085C96F8
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96E1
	.4byte gText_Rom_5C96E6
	.4byte gText_Rom_5C96EE
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96F3
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96E1
	.4byte gText_Rom_5C96F3
	.globl gUnknown_85C9728
gUnknown_85C9728: @ 0x085C9728
	.4byte gText_Rom_5C96DB
	.4byte gText_Rom_5C96E1
	.4byte gText_Rom_5C96E6
	.4byte gText_Rom_5C96DB
	.globl gUnknown_85C9738
gUnknown_85C9738: @ 0x085C9738

	@ src/strings.c:203 gText_ReturnToVar1
	.globl gText_Rom_5C9738
gText_Rom_5C9738: @ 0x085C9738
	.string "{STR_VAR_1}へ\nもどります$"
	.if (. - gText_Rom_5C9738) > 0xa
	.error "gText_Rom_5C9738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9738) < 0xa
	.space 0xa - (. - gText_Rom_5C9738)
	.endif
	.globl gUnknown_85C9742
gUnknown_85C9742: @ 0x085C9742

	@ src/strings.c:207 strings_line_207
	.globl gText_Rom_5C9742
gText_Rom_5C9742: @ 0x085C9742
	.string " ど う ぐ  $"
	.if (. - gText_Rom_5C9742) > 0x9
	.error "gText_Rom_5C9742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9742) < 0x9
	.space 0x9 - (. - gText_Rom_5C9742)
	.endif

	@ src/strings.c:208 strings_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C974B
gText_Rom_5C974B: @ 0x085C974B
	.string "モンスターボール$"
	.if (. - gText_Rom_5C974B) != 0x9
	.error "gText_Rom_5C974B must retain its original byte length"
	.endif
	.globl gText_Rom_5C9750
	.set gText_Rom_5C9750, gText_Rom_5C974B + 0x5

	@ src/strings.c:209 strings_line_209
	.globl gText_Rom_5C9754
gText_Rom_5C9754: @ 0x085C9754
	.string " わざマシン  $"
	.if (. - gText_Rom_5C9754) > 0x9
	.error "gText_Rom_5C9754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9754) < 0x9
	.space 0x9 - (. - gText_Rom_5C9754)
	.endif

	@ src/strings.c:210 strings_line_210
	.globl gText_Rom_5C975D
gText_Rom_5C975D: @ 0x085C975D
	.string " き の み  $"
	.if (. - gText_Rom_5C975D) > 0x9
	.error "gText_Rom_5C975D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C975D) < 0x9
	.space 0x9 - (. - gText_Rom_5C975D)
	.endif

	@ src/strings.c:211 strings_line_211
	.globl gText_Rom_5C9766
gText_Rom_5C9766: @ 0x085C9766
	.string "たいせつなもの $"
	.if (. - gText_Rom_5C9766) > 0x9
	.error "gText_Rom_5C9766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9766) < 0x9
	.space 0x9 - (. - gText_Rom_5C9766)
	.endif
	.globl gUnknown_85C976F
gUnknown_85C976F: @ 0x085C976F
	@ Replaced baserom.gba range: offset=0x5C976F, size=0x2
	.byte 0xF9, 0x08

