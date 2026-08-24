	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:141 LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore
	.globl gText_Rom_20A783
gText_Rom_20A783: @ 0x0820A783
	.string "いらっしゃいませ！\nミナモ デパート です{EOS}"
	.if (. - gText_Rom_20A783) > 0x16
	.error "gText_Rom_20A783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A783) < 0x16
	.space 0x16 - (. - gText_Rom_20A783)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:144 LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings
	.globl gText_Rom_20A799
gText_Rom_20A799: @ 0x0820A799
	.string "デパートに くると たのしくなって\nいろんな ものを かっちゃうのよ{EOS}"
	.if (. - gText_Rom_20A799) > 0x23
	.error "gText_Rom_20A799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A799) < 0x23
	.space 0x23 - (. - gText_Rom_20A799)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:147 LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture
	.globl gText_Rom_20A7BC
gText_Rom_20A7BC: @ 0x0820A7BC
	.string "きょうは すてきな かぐを\nおかあさんに かって もらうの{EOS}"
	.if (. - gText_Rom_20A7BC) > 0x1e
	.error "gText_Rom_20A7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A7BC) < 0x1e
	.space 0x1e - (. - gText_Rom_20A7BC)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:150 LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill
	.globl gText_Rom_20A7DA
gText_Rom_20A7DA: @ 0x0820A7DA
	.string "コンテストで ゆうしょうした ごほうびに\nマリルリに なにか かって あげるんだよ！{EOS}"
	.if (. - gText_Rom_20A7DA) > 0x2b
	.error "gText_Rom_20A7DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A7DA) < 0x2b
	.space 0x2b - (. - gText_Rom_20A7DA)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:153 LilycoveCity_DepartmentStore_1F_Text_Azumarill
	.globl gText_Rom_20A805
gText_Rom_20A805: @ 0x0820A805
	.string "マリルリ『まりりるぅー！{EOS}"
	.if (. - gText_Rom_20A805) > 0xd
	.error "gText_Rom_20A805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A805) < 0xd
	.space 0xd - (. - gText_Rom_20A805)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:156 LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign
	.globl gText_Rom_20A812
gText_Rom_20A812: @ 0x0820A812
	.string "1かい …… サービス カウンター\n       ちゅうせん かいじょう\p2かい …… トレーナーズ ゾーン\p3かい …… バトル コレクション\p4かい …… わざマシン コーナー\p5かい …… ぬいぐるみ フロアー\pおくじょう …… いこいの ひろば{EOS}"
	.if (. - gText_Rom_20A812) > 0x7f
	.error "gText_Rom_20A812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A812) < 0x7f
	.space 0x7f - (. - gText_Rom_20A812)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:160 LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun
	.globl gText_Rom_20A891
gText_Rom_20A891: @ 0x0820A891
	.string "むせん つうしん って\nたのしい よね！\pいままで できなかった ことが\nできるようになる きが するの！\pむせんで こうかん できなかった\nともだちも ブーッと できたり！\pなんだか とっても\nわくわく しちゃう！{EOS}"
	.if (. - gText_Rom_20A891) > 0x6d
	.error "gText_Rom_20A891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A891) < 0x6d
	.space 0x6d - (. - gText_Rom_20A891)
	.endif
	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:164 LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm
	.globl gText_Rom_20A8FE
gText_Rom_20A8FE: @ 0x0820A8FE
	.string "むせん つうしんの たのしさを\nたくさんの ひとに つたえたいなー{EOS}"
	.if (. - gText_Rom_20A8FE) > 0x22
	.error "gText_Rom_20A8FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A8FE) < 0x22
	.space 0x22 - (. - gText_Rom_20A8FE)
	.endif
	@ analyzed canonical ROM range 0x0820A920-0x0820A99F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A920: @ 0x0820A920
	.byte 0x00
.globl EventScript_JP_0820A921
EventScript_JP_0820A921: @ 0x0820A921
	loadword 0x00, gText_Rom_20A9A0
	callstd 0x02
	end
.globl EventScript_JP_0820A92A
EventScript_JP_0820A92A: @ 0x0820A92A
	loadword 0x00, gText_Rom_20A9C7
	callstd 0x02
	end
.globl EventScript_JP_0820A933
EventScript_JP_0820A933: @ 0x0820A933
	loadword 0x00, gText_Rom_20A9EB
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
