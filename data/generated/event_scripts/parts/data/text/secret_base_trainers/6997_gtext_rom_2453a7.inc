	@ data/text/secret_base_trainers.inc:52 SecretBase_Text_Trainer1PreChampion
	.globl gText_Rom_2453A7
gText_Rom_2453A7: @ 0x082453A7
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだよー\pぼくは ずっと まっていて\nやっと つかえる ように なったんだ!$"
	.if (. - gText_Rom_2453A7) > 0x44
	.error "gText_Rom_2453A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453A7) < 0x44
	.space 0x44 - (. - gText_Rom_2453A7)
	.endif
