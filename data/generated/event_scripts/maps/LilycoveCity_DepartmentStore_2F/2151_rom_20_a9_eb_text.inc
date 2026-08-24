	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:65 LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly
	.globl LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly: @ 0x0820A9A0
	.string "どうぐの きほんは うまく つかいこなすこと\nこれ いちばん だいじ なのヨ{EOS}"
	.if (. - LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly) > 0x27
	.error "LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly) < 0x27
	.space 0x27 - (. - LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:68 LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband
	.globl LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband: @ 0x0820A9C7
	.string "いえで まってる ダンナの\nおみやげ なんだけど どれが いいかしら?{EOS}"
	.if (. - LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband) > 0x24
	.error "LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband) < 0x24
	.space 0x24 - (. - LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:71 LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems
	.globl LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems: @ 0x0820A9EB
	.string "これから とおい ところへ\nたびに いくからな\lここで どっさり どうぐを かっておくのさ{EOS}"
	.if (. - LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems) > 0x2e
	.error "LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems) < 0x2e
	.space 0x2e - (. - LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems)
	.endif
	@ analyzed canonical ROM range 0x0820AA19-0x0820AA88
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820AA19: @ 0x0820AA19
	.byte 0x00
.globl EventScript_JP_0820AA1A
EventScript_JP_0820AA1A: @ 0x0820AA1A
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820AA34
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x40, 0x00, 0x43, 0x00, 0x41, 0x00, 0x46, 0x00, 0x42, 0x00, 0x3F, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AA44
EventScript_JP_0820AA44: @ 0x0820AA44
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820AA5C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x4D, 0x00, 0x4F, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x4A, 0x00, 0x49, 0x00, 0x4E, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AA6E
EventScript_JP_0820AA6E: @ 0x0820AA6E
	loadword 0x00, LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon
	callstd 0x02
	end
.globl EventScript_JP_0820AA77
EventScript_JP_0820AA77: @ 0x0820AA77
	loadword 0x00, LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance
	callstd 0x02
	end
.globl EventScript_JP_0820AA80
EventScript_JP_0820AA80: @ 0x0820AA80
	loadword 0x00, LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon
	callstd 0x02
	end
