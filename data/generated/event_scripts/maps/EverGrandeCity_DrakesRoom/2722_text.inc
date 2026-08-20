	@ data/maps/EverGrandeCity_DrakesRoom/scripts.inc:64 EverGrandeCity_DrakesRoom_Text_IntroSpeech
	.globl gText_Rom_210760
gText_Rom_210760: @ 0x08210760
	.string "わしが ポケモン リーグ\nしてんのう さいごの ひとり\lドラゴンつかいの ゲンジ!\pポケモンは もともと\nじゆうきままな やせいの いきもの\pときとして ひとを こまらせ\nときとして ひとを たすける\pそんな ポケモンと いっしょに たたかうのに\nなにが ひつようか\lおまえ わかって いるのか?\pわかって いなければ\nこの わしに かつことなど できまい!{EOS}"
	.if (. - gText_Rom_210760) > 0xb4
	.error "gText_Rom_210760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210760) < 0xb4
	.space 0xb4 - (. - gText_Rom_210760)
	.endif
