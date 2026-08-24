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
	.globl gText_Rom_21AD38
	.set gText_Rom_21AD38, AbandonedShip_Corridors_B1F_Text_DoorIsLocked + 0x1a
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
