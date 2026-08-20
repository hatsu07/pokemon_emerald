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
