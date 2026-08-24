	@ data/maps/VerdanturfTown/scripts.inc:64 VerdanturfTown_Text_ManTryingToDigTunnel
	.globl VerdanturfTown_Text_ManTryingToDigTunnel
VerdanturfTown_Text_ManTryingToDigTunnel: @ 0x081E60F0
	.string "わたしの パパが いってたの\pこの トンネルって おーきな おとに\nはんのうして さわぎだす おくびょうな\lポケモンが いっぱい なんだって!\pだから かいはつ こうじ やめたんだけど\nおとこの ひとが ひとりで\lトンネルを ほろうと してるんだって!{EOS}"
	.if (. - VerdanturfTown_Text_ManTryingToDigTunnel) > 0x7f
	.error "VerdanturfTown_Text_ManTryingToDigTunnel may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_ManTryingToDigTunnel) < 0x7f
	.space 0x7f - (. - VerdanturfTown_Text_ManTryingToDigTunnel)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:67 VerdanturfTown_Text_ManDugTunnelForLove
	.globl VerdanturfTown_Text_ManDugTunnelForLove
VerdanturfTown_Text_ManDugTunnelForLove: @ 0x081E616F
	.string "あいする ひとの ために\nどうくつを ほっていた ひとが いるの!\pなんだか すごーい!{EOS}"
	.if (. - VerdanturfTown_Text_ManDugTunnelForLove) > 0x2d
	.error "VerdanturfTown_Text_ManDugTunnelForLove may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_ManDugTunnelForLove) < 0x2d
	.space 0x2d - (. - VerdanturfTown_Text_ManDugTunnelForLove)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:70 VerdanturfTown_Text_AirCleanHere
	.globl VerdanturfTown_Text_AirCleanHere
VerdanturfTown_Text_AirCleanHere: @ 0x081E619C
	.string "かざむきの かんけいで このまち には\nかざんばいが とんでくることは ない!\pくうきの おいしい このまちで くらせば\nからだが じょうぶでない ひとでも\lきっと げんきに なれる はずさ!{EOS}"
	.if (. - VerdanturfTown_Text_AirCleanHere) > 0x61
	.error "VerdanturfTown_Text_AirCleanHere may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_AirCleanHere) < 0x61
	.space 0x61 - (. - VerdanturfTown_Text_AirCleanHere)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:73 VerdanturfTown_Text_MakeBattleTentDebut
	.globl VerdanturfTown_Text_MakeBattleTentDebut
VerdanturfTown_Text_MakeBattleTentDebut: @ 0x081E61FD
	.string "ぼくと ぼくの ポケモン\nさいきん すごく ちょうしが よくてね\pバトルテント デビュー させたくて\nこの まちに きたんだ!{EOS}"
	.if (. - VerdanturfTown_Text_MakeBattleTentDebut) > 0x40
	.error "VerdanturfTown_Text_MakeBattleTentDebut may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_MakeBattleTentDebut) < 0x40
	.space 0x40 - (. - VerdanturfTown_Text_MakeBattleTentDebut)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:76 VerdanturfTown_Text_GuyTryingToBustThroughCave
	.globl VerdanturfTown_Text_GuyTryingToBustThroughCave
VerdanturfTown_Text_GuyTryingToBustThroughCave: @ 0x081E623D
	.string "フレンドリィ ショップの となりに\nどうくつが あるだろ?\pなかを ふさいでいる いわを こわし\nとおれるように しようと がんばっている\lやつが いるらしいんだ!\pとおれるように なると いいのに……\nカナズミにも いきやすく なるから!{EOS}"
	.if (. - VerdanturfTown_Text_GuyTryingToBustThroughCave) > 0x79
	.error "VerdanturfTown_Text_GuyTryingToBustThroughCave may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_GuyTryingToBustThroughCave) < 0x79
	.space 0x79 - (. - VerdanturfTown_Text_GuyTryingToBustThroughCave)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:79 VerdanturfTown_Text_EasyToGetToRustboroNow
	.globl VerdanturfTown_Text_EasyToGetToRustboroNow
VerdanturfTown_Text_EasyToGetToRustboroNow: @ 0x081E62B6
	.string "フレンドリィ ショップの となりの\nどうくつが とおれるように なっただろ!\pカナズミまで デボンの しんせいひんを\nかいに いきやすくなって うれしいよ!{EOS}"
	.if (. - VerdanturfTown_Text_EasyToGetToRustboroNow) > 0x4f
	.error "VerdanturfTown_Text_EasyToGetToRustboroNow may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_EasyToGetToRustboroNow) < 0x4f
	.space 0x4f - (. - VerdanturfTown_Text_EasyToGetToRustboroNow)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:82 VerdanturfTown_Text_TownSign
	.globl VerdanturfTown_Text_TownSign
VerdanturfTown_Text_TownSign: @ 0x081E6305
	.string "ここは シダケ タウン\nくさの においの かぜふく こうげん{EOS}"
	.if (. - VerdanturfTown_Text_TownSign) > 0x1f
	.error "VerdanturfTown_Text_TownSign may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_TownSign) < 0x1f
	.space 0x1f - (. - VerdanturfTown_Text_TownSign)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:85 VerdanturfTown_Text_WandasHouse
	.globl VerdanturfTown_Text_WandasHouse
VerdanturfTown_Text_WandasHouse: @ 0x081E6324
	.string "「ミチルの いえ」{EOS}"
	.if (. - VerdanturfTown_Text_WandasHouse) > 0xa
	.error "VerdanturfTown_Text_WandasHouse may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_Text_WandasHouse) < 0xa
	.space 0xa - (. - VerdanturfTown_Text_WandasHouse)
	.endif
	@ data/maps/VerdanturfTown/scripts.inc:88 VerdanturfTown_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl VerdanturfTown_Text_BattleTentSign
VerdanturfTown_Text_BattleTentSign: @ 0x081E632E
	.string "バトルテント シダケタウン かいじょう\nみまもれ! ポケモンバトル{EOS}"
	.if (. - VerdanturfTown_Text_BattleTentSign) != 0x22
	.error "VerdanturfTown_Text_BattleTentSign must retain its original byte length"
	.endif
	.globl gText_Rom_1E634C
	.set gText_Rom_1E634C, VerdanturfTown_Text_BattleTentSign + 0x1e
	@ data/maps/Route116/scripts.inc:447 Route116_Text_RusturfTunnelSign (+1 aliases)
	.globl gText_Rom_1E6350
gText_Rom_1E6350: @ 0x081E6350
	.string "カナズミと シダケを むすぶ\n「カナシダ トンネル」\pかいつう こうじは ちゅうしに なりました{EOS}"
	.if (. - gText_Rom_1E6350) > 0x31
	.error "gText_Rom_1E6350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6350) < 0x31
	.space 0x31 - (. - gText_Rom_1E6350)
	.endif
	@ Embedded ROM bytes: file offset 0x1E6381, size 0x36
	.byte 0x03, 0x8C, 0x63, 0x1E, 0x08, 0x05, 0x90, 0x63, 0x1E, 0x08, 0x00, 0x29, 0x75, 0x08, 0x02, 0xA6
	.byte 0x03, 0x02, 0x0F, 0x00
	.4byte PacifidlogTown_Text_NeatHousesOnWater
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB7, 0x63, 0x1E
	.byte 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte PacifidlogTown_Text_SkyPillarTooScary
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x99
	.byte 0x64, 0x1E, 0x08, 0x09, 0x03, 0x02
