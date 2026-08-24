	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:141 LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore
	.globl LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore
LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore: @ 0x0820A783
	.string "いらっしゃいませ！\nミナモ デパート です{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore) > 0x16
	.error "LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore) < 0x16
	.space 0x16 - (. - LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:144 LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings
	.globl LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings
LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings: @ 0x0820A799
	.string "デパートに くると たのしくなって\nいろんな ものを かっちゃうのよ{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings) > 0x23
	.error "LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings) < 0x23
	.space 0x23 - (. - LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:147 LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture
	.globl LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture
LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture: @ 0x0820A7BC
	.string "きょうは すてきな かぐを\nおかあさんに かって もらうの{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture) > 0x1e
	.error "LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture) < 0x1e
	.space 0x1e - (. - LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:150 LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill
	.globl LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill
LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill: @ 0x0820A7DA
	.string "コンテストで ゆうしょうした ごほうびに\nマリルリに なにか かって あげるんだよ！{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill) > 0x2b
	.error "LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill) < 0x2b
	.space 0x2b - (. - LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:153 LilycoveCity_DepartmentStore_1F_Text_Azumarill
	.globl LilycoveCity_DepartmentStore_1F_Text_Azumarill
LilycoveCity_DepartmentStore_1F_Text_Azumarill: @ 0x0820A805
	.string "マリルリ『まりりるぅー！{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_Azumarill) > 0xd
	.error "LilycoveCity_DepartmentStore_1F_Text_Azumarill may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_Azumarill) < 0xd
	.space 0xd - (. - LilycoveCity_DepartmentStore_1F_Text_Azumarill)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:156 LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign
	.globl LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign
LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign: @ 0x0820A812
	.string "1かい …… サービス カウンター\n       ちゅうせん かいじょう\p2かい …… トレーナーズ ゾーン\p3かい …… バトル コレクション\p4かい …… わざマシン コーナー\p5かい …… ぬいぐるみ フロアー\pおくじょう …… いこいの ひろば{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign) > 0x7f
	.error "LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign) < 0x7f
	.space 0x7f - (. - LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:160 LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun
	.globl LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun
LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun: @ 0x0820A891
	.string "むせん つうしん って\nたのしい よね！\pいままで できなかった ことが\nできるようになる きが するの！\pむせんで こうかん できなかった\nともだちも ブーッと できたり！\pなんだか とっても\nわくわく しちゃう！{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun) > 0x6d
	.error "LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun) < 0x6d
	.space 0x6d - (. - LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:164 LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm
	.globl LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm
LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm: @ 0x0820A8FE
	.string "むせん つうしんの たのしさを\nたくさんの ひとに つたえたいなー{EOS}"
	.if (. - LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm) > 0x22
	.error "LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm may not grow beyond its original slot"
	.endif
	.if (. - LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm) < 0x22
	.space 0x22 - (. - LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm)
	.endif
	@ analyzed canonical ROM range 0x0820A920-0x0820A99F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A920: @ 0x0820A920
	.byte 0x00
.globl EventScript_JP_0820A921
EventScript_JP_0820A921: @ 0x0820A921
	loadword 0x00, LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly
	callstd 0x02
	end
.globl EventScript_JP_0820A92A
EventScript_JP_0820A92A: @ 0x0820A92A
	loadword 0x00, LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband
	callstd 0x02
	end
.globl EventScript_JP_0820A933
EventScript_JP_0820A933: @ 0x0820A933
	loadword 0x00, LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems
	callstd 0x02
	end
.globl EventScript_JP_0820A93C
EventScript_JP_0820A93C: @ 0x0820A93C
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820A954
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x03, 0x00, 0x02, 0x00, 0x55, 0x00, 0x17, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x0F
	.byte 0x00, 0x10, 0x00, 0x11, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820A96E
EventScript_JP_0820A96E: @ 0x0820A96E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820A988
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x15, 0x00, 0x14, 0x00, 0x18, 0x00, 0x56, 0x00, 0x53
	.byte 0x00, 0x54, 0x00, 0x7E, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x6C, 0x02
