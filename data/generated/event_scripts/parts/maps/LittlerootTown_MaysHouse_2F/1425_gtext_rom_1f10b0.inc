	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:373 RivalsHouse_2F_Text_ItsRivalsPokeBall
	.globl gText_Rom_1F10B0
gText_Rom_1F10B0: @ 0x081F10B0
	.string "{RIVAL}の モンスターボールだ!\pこのままに しておこう……$"
	.if (. - gText_Rom_1F10B0) > 0x1d
	.error "gText_Rom_1F10B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F10B0) < 0x1d
	.space 0x1d - (. - gText_Rom_1F10B0)
	.endif
