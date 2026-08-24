	@ data/maps/SootopolisCity_House4/scripts.inc:22 SootopolisCity_House4_Text_AncientTreasuresWaitingInSea
	.globl gText_Rom_20F5B9
gText_Rom_20F5B9: @ 0x0820F5B9
	.string "いいことを おしえてやろう\pこの あたりの うみの そこには\nこだいの いせきが あるそうだ!\pひょっとしたら むかしの おたからが\nざくざく みつかるかも しれないぜ!{EOS}"
	.if (. - gText_Rom_20F5B9) > 0x56
	.error "gText_Rom_20F5B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F5B9) < 0x56
	.space 0x56 - (. - gText_Rom_20F5B9)
	.endif
	@ data/maps/SootopolisCity_House4/scripts.inc:25 SootopolisCity_House4_Text_StrollUnderwaterWithPokemon
	.globl gText_Rom_20F60F
gText_Rom_20F60F: @ 0x0820F60F
	.string "たからもの かぁ……\pあると いいけど\nそうでなくても ポケモンと いっしょに\lかいていを おさんぽ なんて す・て・き!{EOS}"
	.if (. - gText_Rom_20F60F) > 0x3e
	.error "gText_Rom_20F60F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F60F) < 0x3e
	.space 0x3e - (. - gText_Rom_20F60F)
	.endif
	@ data/maps/SootopolisCity_House4/scripts.inc:28 SootopolisCity_House4_Text_Azumarill
	.globl gText_Rom_20F64D
gText_Rom_20F64D: @ 0x0820F64D
	.string "マリルリ『まるりー{EOS}"
	.if (. - gText_Rom_20F64D) > 0xa
	.error "gText_Rom_20F64D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F64D) < 0xa
	.space 0xa - (. - gText_Rom_20F64D)
	.endif
	@ analyzed canonical ROM range 0x0820F657-0x0820F669
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F657: @ 0x0820F657
	.byte 0x00
.globl EventScript_JP_0820F658
EventScript_JP_0820F658: @ 0x0820F658
	loadword 0x00, gText_Rom_20F66A
	callstd 0x02
	end
.globl EventScript_JP_0820F661
EventScript_JP_0820F661: @ 0x0820F661
	loadword 0x00, gText_Rom_20F6B4
	callstd 0x02
	end
