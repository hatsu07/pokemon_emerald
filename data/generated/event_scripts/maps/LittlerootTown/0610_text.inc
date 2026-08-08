	@ data/maps/LittlerootTown/scripts.inc:958 LittlerootTown_Text_CanUsePCToStoreItems
	.globl gText_Rom_1E452C
gText_Rom_1E452C: @ 0x081E452C
	.string "パソコンを つかえば\nどうぐや ポケモンが ほぞん できるんだ!\pかがくの ちからって しびれるーっ!$"
	.if (. - gText_Rom_1E452C) > 0x34
	.error "gText_Rom_1E452C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E452C) < 0x34
	.space 0x34 - (. - gText_Rom_1E452C)
	.endif
