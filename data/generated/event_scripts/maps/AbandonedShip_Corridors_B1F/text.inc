	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:56 AbandonedShip_Corridors_B1F_Text_DuncanIntro (+1 aliases)
	.globl AbandonedShip_Corridors_B1F_Text_DuncanIntro
AbandonedShip_Corridors_B1F_Text_DuncanIntro: @ 0x0821AC96
	.string "ふなのりは ふねに のるとき\nかならず ポケモンを もっている!\lちょいと しょうぶ してくれ!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro) > 0x31
	.error "AbandonedShip_Corridors_B1F_Text_DuncanIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro) < 0x31
	.space 0x31 - (. - AbandonedShip_Corridors_B1F_Text_DuncanIntro)
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:59 AbandonedShip_Corridors_B1F_Text_DuncanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Corridors_B1F_Text_DuncanDefeat
AbandonedShip_Corridors_B1F_Text_DuncanDefeat: @ 0x0821ACC7
	.string "こりゃ まいった"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanDefeat) != 0x9
	.error "AbandonedShip_Corridors_B1F_Text_DuncanDefeat must retain its original byte length"
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:62 AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
	.globl AbandonedShip_Corridors_B1F_Text_DuncanPostBattle
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle: @ 0x0821ACD0
	.string "ふなぞこが みずの なかに\nしずんで いるんだよ\pポケモンが みずに もぐれる わざを\nつかえたら さきに すすめるんだがな……"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle) > 0x41
	.error "AbandonedShip_Corridors_B1F_Text_DuncanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle) < 0x41
	.space 0x41 - (. - AbandonedShip_Corridors_B1F_Text_DuncanPostBattle)
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:65 AbandonedShip_Corridors_B1F_Text_YayItsAShip
	.globl AbandonedShip_Corridors_B1F_Text_YayItsAShip
AbandonedShip_Corridors_B1F_Text_YayItsAShip: @ 0x0821AD11
	.string "わーい!\nふね だぞー!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_YayItsAShip) > 0xd
	.error "AbandonedShip_Corridors_B1F_Text_YayItsAShip may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_YayItsAShip) < 0xd
	.space 0xd - (. - AbandonedShip_Corridors_B1F_Text_YayItsAShip)
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:68 AbandonedShip_Corridors_B1F_Text_DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Corridors_B1F_Text_DoorIsLocked
AbandonedShip_Corridors_B1F_Text_DoorIsLocked: @ 0x0821AD1E
	.string "カギが かかっている\pとびらには そうこ と かかれている"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_DoorIsLocked) != 0x1e
	.error "AbandonedShip_Corridors_B1F_Text_DoorIsLocked must retain its original byte length"
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:71 AbandonedShip_Corridors_B1F_Text_InsertedStorageKey
	.globl AbandonedShip_Corridors_B1F_Text_InsertedStorageKey
AbandonedShip_Corridors_B1F_Text_InsertedStorageKey: @ 0x0821AD3C
	.string "{PLAYER}は\nそうこのカギを つかった!\pさしこんだ カギは ぬけなくなったが\nとびらは ひらいた!"
	.byte EOS
	.if (. - AbandonedShip_Corridors_B1F_Text_InsertedStorageKey) > 0x30
	.error "AbandonedShip_Corridors_B1F_Text_InsertedStorageKey may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Corridors_B1F_Text_InsertedStorageKey) < 0x30
	.space 0x30 - (. - AbandonedShip_Corridors_B1F_Text_InsertedStorageKey)
	.endif
	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:74 AbandonedShip_Text_TheDoorIsOpen
	.globl AbandonedShip_Text_TheDoorIsOpen
AbandonedShip_Text_TheDoorIsOpen: @ 0x0821AD6C
	.string "とびらは あいている!"
	.byte EOS
	.if (. - AbandonedShip_Text_TheDoorIsOpen) > 0xc
	.error "AbandonedShip_Text_TheDoorIsOpen may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Text_TheDoorIsOpen) < 0xc
	.space 0xc - (. - AbandonedShip_Text_TheDoorIsOpen)
	.endif
	@ Embedded ROM bytes: file offset 0x21AD78, size 0x18
	.byte 0x05, 0x7E, 0xAD, 0x21, 0x08, 0x00, 0x40, 0x18, 0x40, 0xFF, 0x11, 0x00, 0x04, 0x00, 0x02, 0x0F
	.byte 0x00, 0x90, 0xAD, 0x21, 0x08, 0x09, 0x02, 0x02
