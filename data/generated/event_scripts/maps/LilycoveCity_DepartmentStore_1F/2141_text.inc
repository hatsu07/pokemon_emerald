	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:156 LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign
	.globl gText_Rom_20A812
gText_Rom_20A812: @ 0x0820A812
	.string "1かい …… サービス カウンター\n       ちゅうせん かいじょう\p2かい …… トレーナーズ ゾーン\p3かい …… バトル コレクション\p4かい …… わざマシン コーナー\p5かい …… ぬいぐるみ フロアー\pおくじょう …… いこいの ひろば$"
	.if (. - gText_Rom_20A812) > 0x7f
	.error "gText_Rom_20A812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A812) < 0x7f
	.space 0x7f - (. - gText_Rom_20A812)
	.endif
