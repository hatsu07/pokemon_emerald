	@ data/text/apprentice.inc:541 gText_ApprenticeWhichMonFirst10
	.globl gText_Rom_2708BB
gText_Rom_2708BB: @ 0x082708BB
	.string "{PLAYER}{KUN} きいてくれ たいへんだ!\nおいらの ポケモンと きたら\l3びき いっしょに とびだすんだよ!\l……なんて わきゃ ないな わはは!\pじつは おいら ポケモンの\nじゅんばん なんて きめるの\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを さいしょに だしたら いいか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_Rom_2708BB) > 0xaf
	.error "gText_Rom_2708BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2708BB) < 0xaf
	.space 0xaf - (. - gText_Rom_2708BB)
	.endif
