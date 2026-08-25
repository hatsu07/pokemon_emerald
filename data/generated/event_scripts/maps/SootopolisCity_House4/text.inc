	@ data/maps/SootopolisCity_House4/scripts.inc:22 SootopolisCity_House4_Text_AncientTreasuresWaitingInSea
	.globl SootopolisCity_House4_Text_AncientTreasuresWaitingInSea
SootopolisCity_House4_Text_AncientTreasuresWaitingInSea: @ 0x0820F5B9
	.string "いいことを おしえてやろう\pこの あたりの うみの そこには\nこだいの いせきが あるそうだ!\pひょっとしたら むかしの おたからが\nざくざく みつかるかも しれないぜ!{EOS}"
	.if (. - SootopolisCity_House4_Text_AncientTreasuresWaitingInSea) > 0x56
	.error "SootopolisCity_House4_Text_AncientTreasuresWaitingInSea may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House4_Text_AncientTreasuresWaitingInSea) < 0x56
	.space 0x56 - (. - SootopolisCity_House4_Text_AncientTreasuresWaitingInSea)
	.endif
	@ data/maps/SootopolisCity_House4/scripts.inc:25 SootopolisCity_House4_Text_StrollUnderwaterWithPokemon
	.globl SootopolisCity_House4_Text_StrollUnderwaterWithPokemon
SootopolisCity_House4_Text_StrollUnderwaterWithPokemon: @ 0x0820F60F
	.string "たからもの かぁ……\pあると いいけど\nそうでなくても ポケモンと いっしょに\lかいていを おさんぽ なんて す・て・き!{EOS}"
	.if (. - SootopolisCity_House4_Text_StrollUnderwaterWithPokemon) > 0x3e
	.error "SootopolisCity_House4_Text_StrollUnderwaterWithPokemon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House4_Text_StrollUnderwaterWithPokemon) < 0x3e
	.space 0x3e - (. - SootopolisCity_House4_Text_StrollUnderwaterWithPokemon)
	.endif
	@ data/maps/SootopolisCity_House4/scripts.inc:28 SootopolisCity_House4_Text_Azumarill
	.globl SootopolisCity_House4_Text_Azumarill
SootopolisCity_House4_Text_Azumarill: @ 0x0820F64D
	.string "マリルリ『まるりー{EOS}"
	.if (. - SootopolisCity_House4_Text_Azumarill) > 0xa
	.error "SootopolisCity_House4_Text_Azumarill may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House4_Text_Azumarill) < 0xa
	.space 0xa - (. - SootopolisCity_House4_Text_Azumarill)
	.endif
	@ analyzed canonical ROM range 0x0820F657-0x0820F669
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F657: @ 0x0820F657
	.byte 0x00
.globl EventScript_JP_0820F658
EventScript_JP_0820F658: @ 0x0820F658
	loadword 0x00, SootopolisCity_House5_Text_SootopolisMtPyreConnection
	callstd 0x02
	end
.globl EventScript_JP_0820F661
EventScript_JP_0820F661: @ 0x0820F661
	loadword 0x00, SootopolisCity_House5_Text_BrotherUsedToStudySea
	callstd 0x02
	end
