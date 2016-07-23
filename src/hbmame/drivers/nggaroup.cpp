// license:BSD-3-Clause
// copyright-holders:Robbbert
// Garou Mark of the Wolves: mostly hacks of the prototype



DRIVER_INIT_MEMBER( neogeo_hbmame, garoud )
{
	DRIVER_INIT_CALL(neogeo);
	m_sprgen->m_fixed_layer_bank_type = 1;
	m_sma_prot->garou_decrypt_68k(cpuregion);
	m_cmc_prot->neogeo_sfix_decrypt(spr_region, spr_region_size, fix_region, fix_region_size);
	m_sma_prot->garou_install_protection(m_maincpu, m_banked_cart);
}



ROM_START( garoub ) // hack of garou
	ROM_REGION( 0x900000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "kf.neo-sma", 0x0c0000, 0x040000, CRC(98bc93dc) SHA1(01fe3d18b50f770e131e8d8eeff4c630ba8c9551) )
	ROM_LOAD16_WORD_SWAP( "253-ep1.p1", 0x100000, 0x200000, CRC(ea3171a4) SHA1(bbda40f652baa0dc5fc6a006c001a1bdb0df43f6) )
	ROM_LOAD16_WORD_SWAP( "253-ep2.p2", 0x300000, 0x200000, CRC(382f704b) SHA1(0ace9c84a8b8a0524fd9a503e7d872de1bf1bd52) )
	ROM_LOAD16_WORD_SWAP( "253-ep3.p3", 0x500000, 0x200000, CRC(e395bfdd) SHA1(6b50f5ac15bf66b7e4e9bff57594fd3d7530c831) )
	ROM_LOAD16_WORD_SWAP( "253b.p4", 0x700000, 0x200000, CRC(c1fb6ff4) SHA1(5a907c2c0e8d1fe40f3eecd3b79d97ac8e393940) )

	NEO_SFIX_MT_512K

	NEO_BIOS_AUDIO_256K( "253-m1.m1", CRC(36a806be) SHA1(90fb44dc0c3fb57946a0f35716056abb84a0f191) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "253-v1.v1", 0x000000, 0x400000, CRC(263e388c) SHA1(11f05feee170370c4bfc5053af79246a6e3de5dc) )
	ROM_LOAD( "253-v2.v2", 0x400000, 0x400000, CRC(2c6bc7be) SHA1(c9c61054ce1a47bf1bf77a31117726b499df24a4) )
	ROM_LOAD( "253-v3.v3", 0x800000, 0x400000, CRC(0425b27d) SHA1(986863c98fc3445487242dcf2ea75b075e7f33ee) )
	ROM_LOAD( "253-v4.v4", 0xc00000, 0x400000, CRC(a54be8a9) SHA1(d7123e79b43e8adfaa5ecadbfcbeb6be890ec311) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "253-c1.c1", 0x0000000, 0x800000, CRC(0603e046) SHA1(5ef4557ce90ba65d36129de97be1fdc049c4a3d0) )
	ROM_LOAD16_BYTE( "253-c2.c2", 0x0000001, 0x800000, CRC(0917d2a4) SHA1(d4ed3a13ae22f880fb399671c1752f1a0283f316) )
	ROM_LOAD16_BYTE( "253-c3.c3", 0x1000000, 0x800000, CRC(6737c92d) SHA1(678f0c9cc1267bd131546981b9989bfb7289d8ba) )
	ROM_LOAD16_BYTE( "253-c4.c4", 0x1000001, 0x800000, CRC(5ba92ec6) SHA1(aae36b050a3a0321026a96eba06dd184c0e2acca) )
	ROM_LOAD16_BYTE( "253-c5.c5", 0x2000000, 0x800000, CRC(3eab5557) SHA1(47c433015aa81a0b0a1d3ee51382c4948b80c023) )
	ROM_LOAD16_BYTE( "253-c6.c6", 0x2000001, 0x800000, CRC(308d098b) SHA1(b052f1fa9fbc69606004c250e2505360eaa24949) )
	ROM_LOAD16_BYTE( "253-c7.c7", 0x3000000, 0x800000, CRC(c0e995ae) SHA1(8675ca787d28246174c313167f82557f021366fc) )
	ROM_LOAD16_BYTE( "253-c8.c8", 0x3000001, 0x800000, CRC(21a11303) SHA1(fd61221ad257c185ef5c1f9694bd6b840b591af3) )
ROM_END

ROM_START( garoud )
	ROM_REGION( 0x900000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "kf.neo-sma", 0x0c0000, 0x040000, CRC(98bc93dc) SHA1(01fe3d18b50f770e131e8d8eeff4c630ba8c9551) )
	ROM_LOAD16_WORD_SWAP( "253-ep1.p1", 0x100000, 0x200000, CRC(ea3171a4) SHA1(bbda40f652baa0dc5fc6a006c001a1bdb0df43f6) )
	ROM_LOAD16_WORD_SWAP( "253-ep2.p2", 0x300000, 0x200000, CRC(382f704b) SHA1(0ace9c84a8b8a0524fd9a503e7d872de1bf1bd52) )
	ROM_LOAD16_WORD_SWAP( "253-ep3.p3", 0x500000, 0x200000, CRC(e395bfdd) SHA1(6b50f5ac15bf66b7e4e9bff57594fd3d7530c831) )
	ROM_LOAD16_WORD_SWAP( "253-ep4.p4", 0x700000, 0x200000, CRC(da92c08e) SHA1(5556f983ebcebc33160e90a6a6cf589d54c8cedc) )

	NEO_SFIX_MT_512K

	NEO_BIOS_AUDIO_256K( "253-m1.m1", CRC(36a806be) SHA1(90fb44dc0c3fb57946a0f35716056abb84a0f191) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "253-v1.v1", 0x000000, 0x400000, CRC(263e388c) SHA1(11f05feee170370c4bfc5053af79246a6e3de5dc) )
	ROM_LOAD( "253-v2.v2", 0x400000, 0x400000, CRC(2c6bc7be) SHA1(c9c61054ce1a47bf1bf77a31117726b499df24a4) )
	ROM_LOAD( "253-v3.v3", 0x800000, 0x400000, CRC(0425b27d) SHA1(986863c98fc3445487242dcf2ea75b075e7f33ee) )
	ROM_LOAD( "253-v4.v4", 0xc00000, 0x400000, CRC(a54be8a9) SHA1(d7123e79b43e8adfaa5ecadbfcbeb6be890ec311) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "253d.c1", 0x0000000, 0x800000, CRC(497be3f2) SHA1(3b4e524ff185db326cdefe115851ce282272fb58) )
	ROM_LOAD16_BYTE( "253d.c2", 0x0000001, 0x800000, CRC(6a9e95ca) SHA1(d9730d2db58edfa660edab5bf0f7fc3ed058bccf) )
	ROM_LOAD16_BYTE( "253d.c3", 0x1000000, 0x800000, CRC(39373d2f) SHA1(8c0307150bc31001605efbe0e38ae74e1e466d5d) )
	ROM_LOAD16_BYTE( "253d.c4", 0x1000001, 0x800000, CRC(4de23f6c) SHA1(b40bce471fb1815037e4c3705f8238e659a13a82) )
	ROM_LOAD16_BYTE( "253d.c5", 0x2000000, 0x800000, CRC(16634ba5) SHA1(e51649efd039270139aa7292a28925e547b2be59) )
	ROM_LOAD16_BYTE( "253d.c6", 0x2000001, 0x800000, CRC(95671ffd) SHA1(803ebeb74fefe88b9aba53cbca103c0e9145abcb) )
	ROM_LOAD16_BYTE( "253d.c7", 0x3000000, 0x800000, CRC(e36ce77f) SHA1(71931559293182749ded13c52d8bac988a3a062f) )
	ROM_LOAD16_BYTE( "253d.c8", 0x3000001, 0x800000, CRC(ddbd1096) SHA1(634cfb61398b3f1b983f7f3966b53f4cc3a78671) )
ROM_END

ROM_START( garoupamu ) /* Garou: Mark of the Wolves PROTOTYPE - Fix by MU - (Approach to Arcade by MU Version 5.0a) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253pamu.p1", 0x000000, 0x100000, CRC(d5c54453) SHA1(A7FE7AB68161583E10397B1B1B30299BE93AE90C) )
	ROM_LOAD16_WORD_SWAP( "proto_253-p2.p2", 0x100000, 0x400000, CRC(bf8de565) SHA1(0e24574168cd38138bed0aa4dca49849f6901ca2) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupeh ) /* Garou: Mark of the Wolves PROTOTYPE - Enhance by Ydmis - (In MVS mode can choose Kain and Grant) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253peh.p1", 0x000000, 0x100000, CRC(61c65b05) SHA1(0159D181EEC3346C53C411BCFB9A3F17781FD7BC) )
	ROM_LOAD16_WORD_SWAP( "proto_253-p2.p2", 0x100000, 0x400000, CRC(bf8de565) SHA1(0e24574168cd38138bed0aa4dca49849f6901ca2) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupehc ) /* Garou: Mark of the Wolves PROTOTYPE - Enhance by Creamymami and Ydmis - (In MVS mode can choose Kain and Grant - power hack) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253pehc.p1", 0x000000, 0x100000, CRC(46b087b7) SHA1(236C8EC295A7380101BE27C5ED472617380A87A6) )
	ROM_LOAD16_WORD_SWAP( "proto_253-p2.p2", 0x100000, 0x400000, CRC(bf8de565) SHA1(0e24574168cd38138bed0aa4dca49849f6901ca2) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupf ) /* Garou: Mark of the Wolves PROTOTYPE - Fix by UNKNOWN - (Fixed winning message, sprites and some bugs for prototype - from Mame32+ IPS collection) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253pf.p1", 0x000000, 0x100000, CRC(124bdbf7) SHA1(81F4BC87AA6B7D34ECF4BEDF0BAA8AEB5B2E179A) )
	ROM_LOAD16_WORD_SWAP( "253pf.p2", 0x100000, 0x400000, CRC(19eb641b) SHA1(114BE5C20142223CF6BB0938AA3B07B61E3243E1) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupfp ) /* Garou: Mark of the Wolves PROTOTYPE - (garoupfp) - Fix by UNKNOWN (Rom fix - FIXPLUS) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253pfp.p1", 0x000000, 0x100000, CRC(0b23e2cb) SHA1(B61730457EFEBFFC4A1F5A31FEFBAF2E4CC8F49E) )
	ROM_LOAD16_WORD_SWAP( "proto_253-p2.p2", 0x100000, 0x400000, CRC(bf8de565) SHA1(0e24574168cd38138bed0aa4dca49849f6901ca2) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupfu ) /* Garou: Mark of the Wolves PROTOTYPE - Fix by UNKNOWN - (Unknown Prototype Hack/Fix) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253pfu.p1", 0x000000, 0x100000, CRC(3f41581e) SHA1(F62C64529A79C8867B789BC655182D702824464C) )
	ROM_LOAD16_WORD_SWAP( "253pfu.p2", 0x100000, 0x400000, CRC(cf4b3903) SHA1(CFC00DC3EB0F6D566C3F5DD8EC0D6B4440E17AAE) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupx11 ) // all confirmed
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253px11.p1", 0x000000, 0x100000, CRC(7a5e411e) SHA1(e56c518e1496948d882721d393e6e95b74cf95f4) )
	ROM_LOAD16_WORD_SWAP( "253px11.p2", 0x100000, 0x400000, CRC(1eeecc14) SHA1(f42cfcaf10a2c8454bf90e53fa51c1c5c23b26de) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "253px11.c8",      0x3000001, 0x800000, CRC(7f004da7) SHA1(724d2b6439822ca30dad6d1ab59739b59e52c3a1) )
ROM_END

ROM_START( garoupy ) /* Garou: Mark of the Wolves PROTOTYPE - Hack by Ydmis - (In MVS mode P1 can choose Kain and Grant) */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253py.p1", 0x000000, 0x100000, CRC(5b010d7a) SHA1(5DC416E634456B2403ADF0668D18FC5FF60FAFDC) )
	ROM_LOAD16_WORD_SWAP( "proto_253-p2.p2", 0x100000, 0x400000, CRC(bf8de565) SHA1(0e24574168cd38138bed0aa4dca49849f6901ca2) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END

ROM_START( garoupy1 ) /* Prototype Version, seems genuine */
	ROM_REGION( 0x500000, "maincpu", 0 )
	ROM_LOAD16_WORD_SWAP( "253py1.p1", 0x000000, 0x100000, CRC(b4a28ce4) SHA1(bab447230b6bc91a327a2622a55e125ce3aef781) )
	ROM_LOAD16_WORD_SWAP( "253pf.p2",  0x100000, 0x400000, CRC(19eb641b) SHA1(114BE5C20142223CF6BB0938AA3B07B61E3243E1) )

	NEO_SFIX_128K( "proto_253-s1.s1", CRC(779989de) SHA1(8bd550857b60f8a907f6d39a4225ceffdd330307) )

	NEO_BIOS_AUDIO_256K( "proto_253-m1.m1", CRC(bbe464f7) SHA1(f5f8f3e48f5d453f45107085d6f4023bcd24c053) )

	ROM_REGION( 0x1000000, "ymsnd", 0 )
	ROM_LOAD( "proto_253-v1.v1", 0x000000, 0x400000, CRC(274f3923) SHA1(4c7a8ad1cd0e3afc1f78de3c2929120ed434f104) )
	ROM_LOAD( "proto_253-v2.v2", 0x400000, 0x400000, CRC(8f86dabe) SHA1(b3d2d9f5c1d97a6e7aee2c674fb6627f41bbb240) )
	ROM_LOAD( "proto_253-v3.v3", 0x800000, 0x400000, CRC(05fd06cd) SHA1(6cd699719614bb87547632ea3d61d92d81fdf563) )
	ROM_LOAD( "proto_253-v4.v4", 0xc00000, 0x400000, CRC(14984063) SHA1(170d5638327ec0eb3590b80dc11590897367250c) )

	ROM_REGION( 0x4000000, "sprites", 0 )
	ROM_LOAD16_BYTE( "proto_253-c1.c1", 0x0000000, 0x800000, CRC(5bb5d137) SHA1(d648febd8e6a0bdd9bdbb6ce1f1f8b08567ec05a) )
	ROM_LOAD16_BYTE( "proto_253-c2.c2", 0x0000001, 0x800000, CRC(5c8d2960) SHA1(f7503502be0332adf408ee0ea5ee5161c8939fd8) )
	ROM_LOAD16_BYTE( "proto_253-c3.c3", 0x1000000, 0x800000, CRC(234d16fc) SHA1(7b9221f7ecc438150c8a10be72390329854ed21b) )
	ROM_LOAD16_BYTE( "proto_253-c4.c4", 0x1000001, 0x800000, CRC(b9b5b993) SHA1(6059793eaf6e58c172235fe64aa9d25a40c38ed6) )
	ROM_LOAD16_BYTE( "proto_253-c5.c5", 0x2000000, 0x800000, CRC(722615d2) SHA1(798832c535869f0e247c3db0d8253779b103e213) )
	ROM_LOAD16_BYTE( "proto_253-c6.c6", 0x2000001, 0x800000, CRC(0a6fab38) SHA1(eaee6f2f18af91f7959d84d4b991b3fc182d07c4) )
	ROM_LOAD16_BYTE( "proto_253-c7.c7", 0x3000000, 0x800000, CRC(d68e806f) SHA1(92bfd9839115bd590972ae4ecc45ad35dce22387) )
	ROM_LOAD16_BYTE( "proto_253-c8.c8", 0x3000001, 0x800000, CRC(f778fe99) SHA1(c963f6ba90a36d02991728b44ffcf174ca18268a) )
ROM_END



GAME( 1999, garoub,    garou,    neogeo_noslot, neogeo, neogeo_noslot_state, garou,  ROT0, "Ydmis", "Garou - Mark of the Wolves (Boss hack by Ydmis)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoud,    garou,    neogeo_noslot, neogeo, neogeo_hbmame,       garoud, ROT0, "hack","Garou - Mark of the Wolves (decrypted C)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupamu, garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "MU", "Garou - Mark of the Wolves (proto) (Approach to Arcade by MU v5.0a)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupeh,  garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Ydmis", "Garou - Mark of the Wolves (proto) (Add Char)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupehc, garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Creamymami and Ydmis", "Garou - Mark of the Wolves (proto) (Add Char - Pow hack)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupf,   garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Unk", "Garou - Mark of the Wolves (proto) (Fixed winning message, sprites and some bugs)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupfu,  garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Unk", "Garou - Mark of the Wolves (proto) (Unk Hack/Fix)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupfp,  garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Unk", "Garou - Mark of the Wolves (proto) (Rom Fix - FixPlus)", MACHINE_SUPPORTS_SAVE )
GAME( 2011, garoupx11, garoupy,  neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "hack", "Garou - Mark of the Wolves XTREME PLUS", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupy,   neogeo,   neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "Ydmis", "Garou - Mark of the Wolves (proto) (P1 Add Char)", MACHINE_SUPPORTS_SAVE )
GAME( 1999, garoupy1,  garou,    neogeo_noslot, neogeo, neogeo_state,        neogeo, ROT0, "hack", "Garou: Mark of the Wolves (Prototype) [Boss Hack by Ydmis]", MACHINE_SUPPORTS_SAVE )
